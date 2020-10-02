//Write a C program to enter marks of five subjects and calculate total, average and percentage.
#include <iostream>
using namespace std;
int main(){
    int sub1,sub2,sub3,sub4,sub5;   
    float total,avg,percentage;
    cout<<"Enter the marks in the subject";
    cin>>sub1>>sub2>>sub3>>sub4>>sub5;
    avg = (sub1+sub2+sub3+sub4+sub5)/5;
    total = (sub1+sub2+sub3+sub4+sub5);
    percentage = avg * 0.012;
    cout<<avg<<endl<<total<<endl<<percentage;
    return 0;
}