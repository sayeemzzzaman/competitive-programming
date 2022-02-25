#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;



int main(){

    vector<int> v = {1,0,1,3,3,2,9,7,5,11};
    
    // for(int i=0; i<20; i++){
    //     int temp;
    //     cin >> temp;
    //     v.push_back(temp);
    // }                         //taking input from console


    //sort(v.begin(), v.end()); //sorting in ascending order

    sort(v.begin(), v.end(), greater<int>()); //sorting in descending order

    for(int t: v){
        cout << t << " ";
    }
}