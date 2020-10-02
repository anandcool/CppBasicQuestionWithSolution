//Write a C program to find sum of first and last digit of a number.
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a,last,n,count=0,copy,first,sum;
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
sum = first + last;
cout<<"Sum of "<<first<<"and "<<last<<" is "<<sum;
    return 0;
}