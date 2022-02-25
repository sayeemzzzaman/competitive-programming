
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int unique(vector<int> arr, int target)
{
    int high,low,mid;
        high = arr.size()-1;
        low = 0;
        arr[target] = 0;
        while(low<=high)
        {
            mid = low + (high-low) /2;
            if(arr[mid] == target)return mid;
            else if(arr[mid]<target)low = mid+1;
            else if(arr[mid]>target)high = mid-1;
        }
        return -1;
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
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++)
    {
        int check = unique(arr,i);
        if(check == -1)
        {
            cout << i << endl;
            break;
        }
        else cout << "Found in " << i << endl;
    }
}
