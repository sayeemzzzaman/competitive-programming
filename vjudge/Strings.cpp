#include<iostream>

using namespace std;

int main()
{
    string a,b;

    cin >> a >> b;

    cout << a.size() << " " << b.size() << endl << a+b << endl;

    string temp;
    temp[0]=a[0];
    a[0]=b[0];
    b[0]=temp[0];

    cout << a << " " << b << endl;
}
