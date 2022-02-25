#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        if(temp%7!=0 || temp==0){
            cout << "28" << endl;
        }
        else cout << temp << endl;
    }
}