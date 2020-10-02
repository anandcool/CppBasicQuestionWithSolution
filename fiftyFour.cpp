//Write a C program to insert an element in an array.
#include <iostream>
using  namespace std;
int main(){

    int ar[10],pos,n;
    cout<<"Enter the Numbers";
    for(int i=0;i<=5;i++){
        cin>>ar[i];
    }
    cout<<"Enter the Position of New Element";
    cin>>pos;
    cout<<"Enter the Number";
    cin>>n;
    for(int i=6;i>pos;i--){
        ar[i] = ar[i-1];
    }
    ar[pos] = n;
    cout<<"Required Array "<<endl;
    for(int i=0;i<=6;i++)
    cout<<ar[i];
    return 0;
}