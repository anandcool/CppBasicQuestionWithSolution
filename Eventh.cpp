//Write a C program to enter two angles of a triangle and find the third angle.
#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the two Angle";
    cin>>a>>b;
    c=180-(a+b);
    cout<<"The Third Angle is "<<c;
}