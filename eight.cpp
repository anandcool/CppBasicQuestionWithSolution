//Write a C program to convert days into years, weeks and days.
#include <iostream>
using namespace std;
int main(){
    int year,weeks,days,noOfDays;
    cout<<"Enter the No. of Days";
    cin>>noOfDays;
    year = noOfDays/365;
    weeks = (noOfDays%365)/7;
    days = noOfDays - ((year * 365) + weeks * 7);
    cout<<"Year "<<year<<endl<<"weeks "<<endl<<weeks<<"days "<<days;
    return 0;

}