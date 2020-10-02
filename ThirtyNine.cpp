//Write a Cpp program to find frequency of each digit in a given integer.
#include <iostream>
using namespace std;
int main(){
    int freq[10],n,i,lastdigit;
    for(i=0;i<10;i++){
        freq[i] = 0;
    }
    cout<<"Enter the Number "<<endl;
    cin>>n;
    while(n){
        lastdigit = n%10;
        n=n/10;
        freq[lastdigit] = freq[lastdigit] + 1;
    }
    // cout<<"number "<<n;
    for(i=0;i<10;i++){
        cout<<"Frequency of "<<i<<" "<<freq[i]<<endl;
    }
    return 0;
}