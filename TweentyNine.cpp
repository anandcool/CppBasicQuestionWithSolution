//Write a C program to find sum of all odd numbers between 1 to n.
#include <iostream>
using namespace std;
int main(){
    int sum=0,i,n;
    cout<<"Enter the Number"<<endl;
    cin>>n;
    i=1;
    while (i<=n)
    {
        if(i%2)
        sum = sum + i;
        i++;
    }
    cout<<"Sum of natural number"<<sum;   
    return 0;
}