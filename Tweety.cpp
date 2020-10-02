//C program to check leap year using Conditional operator
#include <iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter the Year";
    cin>>year;
    (year%4==0 && year%100 != 0)?cout<<" leap year":(year%400==0)?cout<<"Leap year":cout<<"Not a leap year";
    return 0;
}