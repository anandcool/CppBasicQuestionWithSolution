//Write a C program to copy all elements from an array to another array.
#include <iostream>
using namespace std;
int main(){
    int ar[5],br[5];
    cout<<"Enter the Numbers";
    for(int i=0;i<5;i++){
        cin>>ar[i];
    }
    for(int i=0;i<5;i++){
        br[i] = ar[i];
    }
    for(int i=0;i<5;i++){
        cout<<br[i]<<endl;
    }
    return 0;
}