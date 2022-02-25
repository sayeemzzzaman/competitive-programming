#include<iostream>

using namespace std;

int main(){

    double base,height,area;
    cout << "Enter Base & Height: ";
    cin >> base >> height;

    cout << "Area of Trianle = " << (area = 0.5*(base*height)) << endl;
}