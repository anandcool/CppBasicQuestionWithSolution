//Write a C program to enter a number and print its reverse.
#include <iostream>
using namespace std;
int main(){
    int n,d,rev=0;
    cout<<"Enter the Number";
    cin>>n;
    while(n){
        d=n%10;
        rev = rev*10 + d;
        n=n/10;
    }
    cout<<"Reverse ="<<rev;
    return 0;
}