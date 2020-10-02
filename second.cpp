//Write a C program to enter length and breadth of a rectangle and find its perimeter.

#include <iostream>
using namespace std;
int main(){
    int length,breath;
    cout<<"Enter the Length of a rectangle";
    cin>>length;
    cout<<"Enter the Breath of a rectangle";
    cin>>breath;
    cout<<"Perimeter of a rectangle is "<<2*(length+breath);
    return 0;
}