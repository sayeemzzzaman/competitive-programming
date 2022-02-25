#include<bits/stdc++.h>

using namespace std;

int main() {

    priority_queue <int> p; //max
    priority_queue <int,vector <int>,greater<int>> q; //min

    while(true){
        int num;
        cin >> num;
        
        q.push(num);
        p.push(q.top());
        q.pop();

        if(p.size() > q.size()){
            q.push(p.top());
            p.pop();
        }
        int median;
        if(p.size() == q.size()){
            median = (p.top()+q.top())/2;
        }
        else if(q.size() > p.size()){
            median = q.top();
        }
        cout << "median: " << median << endl;
    }

}