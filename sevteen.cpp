//Write a C program to find maximum between two numbers using conditional operator.
#include <iostream>
using namespace std;
int main(){
int a,b,max;
cout<<"Enter the Two Number";
cin>>a>>b;
max = a>b?a:b;
cout<<"Maximum of "<<a<<" and "<<b<<" "<<max;
return 0;
}