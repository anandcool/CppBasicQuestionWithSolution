//Write a Cpp program to print all natural numbers from 1 to n. - using while loop
#include <iostream>
using namespace std;
int main(){
    int a,i=1;
    cout<<"Enter the Number"<<endl;
    cin>>a;
    while (i<=a)
    {
        cout<<i<<endl;
        i++;
    }
    
    return 0;
}