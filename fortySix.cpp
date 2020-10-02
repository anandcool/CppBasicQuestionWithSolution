//Write a C program to read and print elements of array
#include <iostream>
using namespace std;
int main(){
    int ar[5];
    cout<<"Enter the Number"<<endl;
    for(int i=0;i<5;i++)
    cin>>ar[i];
    cout<<"All element in the array"<<endl;
    for(int i=0;i<5;i++)
    cout<<ar[i]<<endl;
    
    return 0;
}