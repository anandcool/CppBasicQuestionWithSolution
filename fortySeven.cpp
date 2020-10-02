//Write a C program to print all negative elements in an array.
#include <iostream>
using namespace std;
int main(){
    int ar[5];
    cout<<"Enter the Number";
    for(int i=0;i<5;i++)
    cin>>ar[i];
    for(int j=0;j<5;j++){
        if(ar[j]<0)
        cout<<ar[j]<<endl;
    }
    return 0;
}