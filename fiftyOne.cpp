//Write a C program to count total number of even and odd elements in an array.
#include <iostream>
using namespace std;
int main(){
    int ar[5],even=0,odd=0;
    cout<<"Enter the Numbers";
    for(int i=0;i<5;i++){
        cin>>ar[i];
    }
    for(int i=0;i<5;i++){
        if(ar[i]%2)
        odd++;
        else
        even++;
    }
    cout<<"Odd-:"<<odd<<endl<<"Even-: "<<even;
    return 0;
}