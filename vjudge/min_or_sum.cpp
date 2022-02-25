#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
   
    for(int i=0;i<n;i++){
        int k;
        cin >> k;
        vector<int> vec;
        for(int j=0;j<k;j++){
            int temp;
            cin >> temp;
            vec.push_back(temp);
        }
        int result = vec[0];
        for(int l=0;l<k;l++){
            result|=vec[l];
        }
        cout << result << endl;
    }
    
}