//Write a C program to swap first and last digits of a number.
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,copy,count=0,a,d,num=0;
    cout<<"Enter the Required Number"<<endl;
    cin>>n;
    copy = n;
    a=n;
    while(copy){
        copy=copy/10;
        count++;
    }
    while(a){
        d=a%10;
        num = num + d*pow(10,(count-1));
        a=a/10;
        count--;
    }
    cout<<"Swap number "<<num;
    return 0;
}