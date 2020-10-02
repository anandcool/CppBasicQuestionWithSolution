
//Write a C program to check whether a number is even or odd using conditional.
#include <iostream>
using namespace std;
int main(){
int a;
cout<<"Enter the Number"<<endl;
cin>>a;
a%2==0 ?cout<<a<<" is even":cout<<a<<" is odd";
return 0;
}