//Write a C program to enter a number and print it in words.
#include <iostream>
using namespace std;
int main(){
    int n,rev=0;
    cout<<"Enter the Number"<<endl;
    cin>>n;
    while(n){
        rev = rev*10 + n%10;
        n = n/10;
    }

    while(rev){
        switch (rev%10)
        {
        case 0:
            cout<<"Zero";
            break;
        case 1:
            cout<<"One ";
            break;
        case 2:
            cout<<"Two ";
            break;
        case 3:
            cout<<"Three ";
            break;
        case 4:
            cout<<"Four ";
            break;
        case 5:
            cout<<"Five ";
            break;
        case 6:
            cout<<"Six ";
            break;
        case 7:
            cout<<"Seven ";
            break;
        case 8:
            cout<<"Eight ";
            break;
        case 9:
            cout<<"Nine ";
            break;
        }
        rev = rev/10;
    }

    

    return 0;
}