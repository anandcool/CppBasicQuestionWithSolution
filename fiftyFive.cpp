//Write a C program to delete an element from an array at specified position.

#include <iostream>
using namespace std;

int main(){
    int ar[10],pos;
    cout<<"Enter the Number"<<endl;
    for(int i=0;i<5;i++){
        cin>>ar[i];
    }
    cout<<"Enter the position to delete";
    cin>>pos;
    for (int i = pos; i <5; i++)
    {
        ar[i] = ar[i+1];
    }
    cout<<"Required Array"<<endl;
    for (int i = 0; i < 4; i++)
    {
    cout<<ar[i]<<endl;
    }
    
    return 0;
}