//Write a C program to enter temperature in Fahrenheit and convert to Celsius
#include <iostream>
using namespace std;
int main(){
    float f,c;
    cout<<"Enter the Temperature in Fahrenheit";
    cin>>f;
    c = ((f-32)*5)/9;
    cout<<"Temperature in Celsisus"<<c;
    return 0;
}