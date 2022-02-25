#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>

using namespace std;

int main(){

    int n,m;
    string arr,brr;
    cin >> n;

    for(int i=0; i<n; i++)cin >> arr[i];

    cin >> m;
    
    for(int i=0; i<n; i++)cin >> brr[i];

    vector<int> counter(10, 0);

    int len = brr.length();

    for(int i=0; i<len; i++){
        counter[brr[i]]++;
    }
    for(int i=0; i<10 ; i++){
        //if(counter2[i]>0)
        cout << i << " occurs: " << counter[i] << " times " << endl;
    } 

}