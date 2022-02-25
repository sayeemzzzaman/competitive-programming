#include<iostream>
#include<algorithm>
#include<vector>


using namespace std;



int lonelyinteger(vector<int> arr) {

    int uni=0;

    for(int i=0;i<arr.size();i++)
    {
        uni ^= arr[i];
        cout << uni << " ";
    }
    return uni;
}

int main()
{
    vector <int> arr;
    int n;

    cin >> n;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    cout << endl << lonelyinteger(arr) << endl;
}
