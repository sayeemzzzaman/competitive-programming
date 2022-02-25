#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    vector<int> v = {5,6,9,3,1,0,5,3,8,6,3,6,8,9,7,4,1};
    int high,low,mid;
    int target = 1;
    int flag = 1;
    sort(v.begin(),v.end());

    for(int i=0; i<1000 ; i++){
        int temp = rand() % 100; //generating random number
        v.push_back(temp);
    }

    for(int i: v){
        cout << i <<" ";
    }
    cout << endl;
    high = v.size()-1;
    low = 0;
    int count=1;

    while(low<=high){ 
        mid = low + (high-low)/2;
        cout << "loop count " << count++ << endl;
        if(v[mid] == target){
            cout << "Target Found!" << endl;
            flag = 0;
            break;
        }
        else if(v[mid] < target){
            low = mid+1;
        }
        else if(v[mid] > target){
            high = mid-1;
        }
        
    }
    if(flag == 1)cout << "Not Found!" << endl;
}