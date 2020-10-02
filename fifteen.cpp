//Write a C program to enter P, T, R and calculate Simple Interest.
#include <iostream>
using namespace std;
int main(){
    float p,t,r,si;
    cout<<"Enter Principal Time and Rate";
    cin>>p>>t>>r;
    si=(p*r*t)/100;
    cout<<si;
    return 0;
}