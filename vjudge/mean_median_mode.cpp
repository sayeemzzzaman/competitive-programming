#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

double mean(vector<double> vec, int n){
    double sum=0;
    for(double v:vec){
        sum+=v;
    }
    return sum/n;
}

double median(vector<double> vec){

    return (vec[vec.size()/2]+vec[(vec.size()/2)-1])/2;
}

int occur(vector<double> vec, int n, double check){
    int count = 0;
    for(int i=0; i<n; i++){
        if(check == vec[i])count++;
    }
    return count;
}

int mode(vector<double> vec, int n){
    int max = 0,index;
    for(int i=0; i<n ; i++){
        int check = occur(vec,n,vec[i]);
        if(check>max){
            max = check;
            index = i;
        }
    }
    return index;
}

int main(){
    double n;
    cin >> n;
    vector<double> vec(n);
    for(double i=0;i<n;i++){
        cin >> vec[i];
    }
    sort(vec.begin(),vec.end());
    cout << mean(vec,n) << endl << median(vec) << endl << vec[mode(vec,n)];
}