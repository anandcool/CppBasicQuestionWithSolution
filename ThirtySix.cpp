//Write a C program to calculate product of digits of a number.
#include <iostream>
using namespace std;
int main(){
    int n,product=1,d;
    cout<<"Enter the Number"<<endl;
    cin>>n;
    while(n){
        d=n%10;
        product = product * d;
        n=n/10;
    }
    cout<<"Product ="<<product;
}