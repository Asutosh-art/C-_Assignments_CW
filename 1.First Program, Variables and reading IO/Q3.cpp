//Write a C++ program to take length and breadth of a rectangle and print its area.

#include<iostream>
using namespace std;

int main(){
    
    int length,breadth;
    cout<<"Enter the Length: ";
    cin>>length;
    cout<<"Enter the Breadth: ";
    cin>>breadth;
    cout<<"Area = " << (length*breadth);
    return 0;
}