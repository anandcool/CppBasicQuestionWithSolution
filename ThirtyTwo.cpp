//Write a C program to find first and last digit of a number.
#include <iostream>
#include <math.h>
using namespace std;
int main(){
int a,last,n,count=0,copy,first;
 cout<<"Enter the Number";
 cin>>a;   
 n=a;
 copy=a;
 while(n){
    count++;
    n=n/10;
 }
last  = copy%10;
first = copy/pow(10,count-1);
cout<<"First ="<<first<<"Last ="<<last;
 return 0;
}