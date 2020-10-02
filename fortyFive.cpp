//Write a C program to find HCF (GCD) of two numbers.
#include <iostream>
using namespace std;
int main(){
    int a,b,hcf,min,i;
    cout<<"Enter the First Number";
    cin>>a;
    cout<<"Enter the Second Number";
    cin>>b;
    min =(a>b)?b:a;
    for(i=1;i<=min;i++){
        if(a%i==0 && b%i==0){
            hcf=i;
        }
    }
    cout<<"HCF -:"<<hcf;
    return 0;
}