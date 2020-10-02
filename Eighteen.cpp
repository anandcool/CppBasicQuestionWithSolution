//Write a C program to find maximum between three numbers using conditional operator.
#include <iostream>
using namespace std;
int main(){
    int a,b,c,max;
    cout<<"Enter the Three Number";
    cin>>a>>b>>c;
    max = a>b?(a>c?a:c):b;
    cout<<"Maximum is"<<max;
    return 0;
}