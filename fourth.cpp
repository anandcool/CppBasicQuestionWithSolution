//Write a C program to enter radius of a circle and find its diameter, circumference and area.

#include <iostream>
using namespace std;
int main(){
    double radius;
    cout<<"Enter the radius";
    cin>>radius;
    cout<<"Diameter of a circle is"<<2*radius<<endl;
    cout<<"Circumference of a circle is"<<2*3.14*radius<<endl;
    cout<<"Area of a circle is"<<3.14*radius*radius;
    return 0;
}