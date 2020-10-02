//Write a C program to calculate sum of digits of a number.
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,sum=0,d;
    cout<<"Enter the Number";
    cin>>n;
    while(n){
        d=n%10;
        sum = sum+d;
        n=n/10;
    }
    cout<<"Sum ="<<sum;
    return 0;
}