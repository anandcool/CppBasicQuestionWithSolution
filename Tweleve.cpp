//Write a C program to enter base and height of a triangle and find its area.
#include <iostream>
using namespace std;
int main(){
    int b,h,a;
    cout<<"Enter the Height and base";
    cin>>b>>h;
    a=(b*h)/2;
    cout<<"Area of a Traingle"<<a;
    return 0;
}