//Write a C program to find all factors of a number.
#include <iostream>
using namespace std;
int main(){

    int n,i=1;
    cout<<"Enter the Number";
    cin>>n;
    cout<<"Factor are -:";
    for(i=1;i<n;i++){
        if(n%i==0)
        cout<<i<<endl;
    }
    return 0;
}