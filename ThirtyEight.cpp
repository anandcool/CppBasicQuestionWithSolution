//Write a C program to check whether a number is palindrome or not.
#include <iostream>
using namespace std;
int main(){
    int a,n,rev=0;
    cout<<"Enter the Number";
    cin>>n;
    a=n;
    while(a){
        rev = rev*10+a%10;
        a=a/10;
    }
    if(rev == n)
    cout<<n<<" is plaindrome";
    else
    cout<<n<<" is not a plaindrome";
   
    return 0;

}