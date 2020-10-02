//Write a C program to count number of digits in a number.
#include <iostream>
using namespace std;
int main(){
 int n,count=0;
 cout<<"Enter the Number";
 cin>>n;
 while (n)
 {
     n=n/10;
     count++;
 }
 cout<<"Count of a digit is "<<count;

}