//Write a C program to check whether character is an alphabet or not using conditional operator.
#include <iostream>
using namespace std;
int main(){
    char a;
    cout<<"Enter the Alphabet";
    cin>>a;
    ((a>='A' && a<='Z') || (a>='a' && a<='z')) ? cout<< "It's is an alphabet":cout<<"It's not an alphabet "; 
    return 0;
}