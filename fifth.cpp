//Write a C program to enter length in centimeter and convert it into meter and kilometer.
#include <iostream>
using namespace std;
int main(){
    float a;
    cout<<"Enter the Length in centimeter"<<endl;
    cin>>a;
    cout<<"Length in meter "<<a/100<<endl;
    cout<<"Length in kilometer "<<a/1000;
    return 0;
}