//Write a C program to find second largest element in an array.
#include <iostream>
using namespace std;
int main(){
    int ar[5],largest,seclarge;
    cout<<"Enter the Number in the array";
    for(int i=0;i<5;i++){
        cin>>ar[i];
    }
    largest = ar[0];
    for(int i=0;i<5;i++){
        if(ar[i]>largest){
            largest = ar[i];
        }
    }
    seclarge = ar[0];
     for(int i=0;i<5;i++){
         if(ar[i] == largest) continue;
        if(ar[i]>seclarge){
            seclarge = ar[i];
        }
     }
     cout<<"Second Largest"<<seclarge;    
    return 0;
}