#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int main(){
    priority_queue <int, vector<int>, greater<int>> pqueue;
    //priority_queue <int> pqueue; //descending order max priority queue

    pqueue.push(10);
    pqueue.push(20);
    pqueue.push(15);
    pqueue.push(12);
    pqueue.push(6);

    while(!pqueue.empty()){
        int t = pqueue.top();
        cout << t << " ";
        pqueue.pop();
    }
}