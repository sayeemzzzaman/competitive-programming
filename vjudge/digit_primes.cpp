#include<iostream>
#include<vector>

using namespace std;

vector<int> primeNumber(int a, int b){
    vector<int> primes(b);
    //int primes=0;
    int count,k,index = 0 ;
    for(int i=a; i<b; i++){
        count = 0;
        for(k=2; k <= i/2; k++){
            if(i%k==0){
                count=1;
                break;
            }
        }
        if(count==0){
            if(i!=1){
                //primes+= i;  
                primes[index++] = i;  
            }
        }
    }
    return primes;
}
int sumOfDigits(int a){
    int sum=0,rem;
    while(a > 0){
        rem = a%10;
        sum+=rem;
        rem = rem/10;
    }
    return sum;
}

int main(){

    int n,a,b;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> a >> b;
        vector<int> prime = primeNumber(a, b);
        for(int j=0;j<prime.size();j++){
            cout << sumOfDigits(prime[i]) << endl;
        }
    }
    
}