//Write a C program to print all ASCII character with their values.
#include <iostream>
using namespace std;

int main(){
    int i;

    for(i=0;i<255;i++)
    cout<<"ASCII Value of"<<i<<" = "<<(char)i<<endl;
    return 0;
}