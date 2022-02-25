#include<iostream>

using namespace std;

int main()
{
    int a,b;
    string digits[] = {"one","two","three","four","five","six","seven","eight","nine"};
    cin >> a >> b;

    while(a<=b)
    {
        if(a<=9)
        {
            cout << digits[a-1] << endl;
        }
        else if(a > 9 && a%2==0) cout << "even" << endl;
        else if(a > 9 && a%2!=0) cout << "odd" << endl;
        a++;
    }
}
