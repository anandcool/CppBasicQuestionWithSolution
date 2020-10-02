//Write a C program to find sum of all array elements. 
#include <iostream>
using namespace std;
int main(){
    int ar[5],sum = 0;
    cout<<"Enter the Number";
    for(int i=0;i<5;i++){
        cin>>ar[i];
    }
    for(int j=0;j<5;j++){
        sum = sum+ar[j];
    }
    cout<<"Sum = "<<sum;
    return 0;
}