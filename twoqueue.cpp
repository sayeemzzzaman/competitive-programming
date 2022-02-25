#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int main(){
    priority_queue <int, vector<int>, greater<int>> lower; //1 2 3 4 minHeap
    priority_queue <int> higher; // 4 3 2 1 maxHeap

    lower.push(1);
    lower.push(2);
    lower.push(3);
    lower.push(4);

    higher.push(5);
    higher.push(6);
    higher.push(7);
    higher.push(8);

    while(!lower.empty()){
        int t = lower.top();
        cout << t << " ";
        lower.pop();
    }
    cout << endl;
    while(!higher.empty()){
        int t = higher.top();
        cout << t << " ";
        higher.pop();
    }
}