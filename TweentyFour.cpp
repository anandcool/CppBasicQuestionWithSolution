//Write a C program to print all alphabets from a to z. - using while loop
#include <iostream>
using namespace std;
int main(){
    int a = 65;
    while(a<91){
        cout<<(char)a<<endl;
        a++;
    }
    return 0;
}