#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void nearlyLucky(long long num){
    
    int i,rem,sum=0,count=0;

    while(num!=0)
    {
        rem = num%10;
        if( rem == 4 || rem == 7){
            count++;
        }
        num/=10;
    }
    if(count == 4 || count == 7)cout << "YES"<<endl;
    else cout<<"NO"<<endl;
}


int main(){
    long long n;
    cin >> n;
    nearlyLucky(n);
}