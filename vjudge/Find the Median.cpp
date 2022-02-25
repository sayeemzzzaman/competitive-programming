#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

int main(){
    int n;
    vector <int> arr;

    cin >> n;

    for(int i=0;i<n;i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    sort(arr.begin(),arr.end());
    int med = arr.size()/2;
    cout << arr[med] << endl;
}
