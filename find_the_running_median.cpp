#include<iostream>
#include<vector>
#include<algorithm>
#include <bits/stdc++.h>

using namespace std;


int main(){
    
    priority_queue <int> maxHeap; 
    priority_queue <int, vector<int>, greater<int>> minHeap;

    // pop removes the first element
    // top returns the first element
    //1 2 3 4 5 6 7 8 9|| 1 2 3 4  5 6 7 8   (4) 3 2 1 -> maxHeap    (5) 6 7 8 -> minHeap

    while(true){

        int num;
        cin >> num;
        if(num == -1)break;

        //tracing
        //min: 1  2 2,3 3,4 3,4,5
        //max: .  1  1  2,1  2,1
        //med: 1  1  2   2    3
        minHeap.push(num); //3 4 5
        cout << "Line 28: " << minHeap.top() << endl;
        maxHeap.push(minHeap.top()); //3 2 1
        minHeap.pop(); //4 5

        while(maxHeap.size() > minHeap.size()){   //max er size beshi hole sheta exchange kore min er size beshi kora hocche -> min-4,5 max-3,2,1 -> min-3,4,5 max-2,1
            cout << "Line 35: " << maxHeap.top() << endl; //so ultimately median min er top
            minHeap.push(maxHeap.top()); //3 4 5
            maxHeap.pop();//2 1
        }
        cout << "sizes: " << minHeap.size() << " & "<< maxHeap.size() << endl;

        int med = -1;
        if(minHeap.size() > maxHeap.size()){
            med = minHeap.top();//3
            cout << "Line 41: " << minHeap.top() << endl;
        }
        else if(minHeap.size() == maxHeap.size()){
            med = (maxHeap.top() + minHeap.top()) / 2;// 2+3/2
            cout << "Line 45: " << maxHeap.top() << " other " << minHeap.top() << endl;
        }

        (med==-1)? cout << "Something is wrong!!" << endl : cout << med << endl; 

    }
}
