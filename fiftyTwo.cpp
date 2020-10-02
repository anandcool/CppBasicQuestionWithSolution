//Write a C program to count total number of negative elements in an array.
#include <iostream>
using namespace std;
int main(){
    int ar[5],negative=0;
    cout<<"Enter the Number";
    for(int i=0;i<5;i++)
    cin>>ar[i];
    for(int i=0;i<5;i++){
        if(ar[i]<0)
        negative++;
    }
    cout<<"Negative number "<<negative;

    return 0;
}