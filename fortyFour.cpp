//Write a C program to calculate factorial of a number.
#include <iostream>
using namespace std;
int main(){
    int n,f=1,i;
    cout<<"Enter the Number";
    cin>>n;
    for(i=1;i<=n;i++)
    f=f*i;
    cout<<"Factorial -:"<<f;
    return 0;
}