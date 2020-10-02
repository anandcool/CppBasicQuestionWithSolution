//Write a C program to enter temperature in Celsius and convert it into Fahrenheit.
#include <iostream>
using namespace std;
int main(){
    float c,f;
    cout<<"Enter the Temperature in celsius";
    cin>>c;
    f= (9*c)/5 + 32;
    cout<<"Temperature in Farnheit"<<f;
    return 0;
}