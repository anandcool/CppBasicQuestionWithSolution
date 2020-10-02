//Write a C program to find maximum and minimum element in an array.
#include <iostream>
using namespace std;
int main(){
    int max,min,ar[5];
    cout<<"Enter the Number";
    for(int i=0;i<5;i++)
    cin>>ar[i];
    max=ar[0];
    min=ar[0];
    for(int i=0;i<5;i++){
        if(ar[i]>max)
        max=ar[i];
     if(ar[i] < min)
        {
            min = ar[i];
        }
    }
    cout<<"Max = "<<max<<" and minimum "<<min;
    return 0;
}