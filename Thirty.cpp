//Write a C program to print multiplication table of any number.
#include <iostream>
using namespace std;
int main(){
    int a,i=1;
    cout<<"Enter the Number to print the table"<<endl;
    cin>>a;
    while (i<=10)
    {
        cout<<a<<" * "<<i<<" = "<<a*i<<endl;
    i++;
    }
    
    return 0;
}