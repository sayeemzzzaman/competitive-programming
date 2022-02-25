#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

    // string str = "aabbcd";
    
    // int n = str.length();
    // int counterLength = 26;

    // vector<int> counter(counterLength, 0);

    // for(int i=0; i<n; i++){
    //     counter[str[i] - 'a']++;
    // }
    // for(int i=0; i<counterLength; i++){
    //     if(counter[i]>0){
    //         cout << (char)(i + 'a') << " occurs: " << counter[i] << " times" << endl;
    //     }
    // }

    string str2 = "112233456";

    int numLength = str2.length();
    int counterLength2 = 10;

    vector<int> counter2(counterLength2, 0);

    for(int i=0; i<numLength; i++){
        counter2[str2[i]]++;
    }
    for(int i=0; i<counterLength2 ; i++){
        //if(counter2[i]>0)
        cout << i << " occurs: " << counter2[i] << " times " << endl;
    } 

}