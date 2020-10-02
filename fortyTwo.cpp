//Write a C program to find power of a number using for loop.
#include <iostream>
using namespace std;
int main(){
    int n,pow,res=1,i;
    cout<<"Enter the Number"<<endl;
    cin>>n;
    cout<<"Enter the power";
    cin>>pow;
    for(i=0;i<pow;i++){
        res = res * n; 
    }
    cout<<"Result :"<<res;
    return 0;
}