#include<bits/stdc++.h>

using namespace std;

void runningMedian(int num){

    priority_queue <int> maxHeap;
    priority_queue <int, vector<int>, greater<int>> minHeap;
    for(int i=0; i<num ; i++){
        int temp;
        cin >> temp;
        minHeap.push(temp);
        maxHeap.push(minHeap.top());
        minHeap.pop();

        if(maxHeap.size() > minHeap.size()){
            minHeap.push(maxHeap.top());
            maxHeap.pop();
        }
        double median;
        if(maxHeap.size() == minHeap.size()){
            median = ((double)(maxHeap.top() + minHeap.top()))/2;
        }
        if(minHeap.size() > maxHeap.size()){
            median = (double)minHeap.top();
        }
        cout << fixed << setprecision(1) << median << endl;
    }
}

int main(){
    int num;
    cin >> num;

    runningMedian(num);
}