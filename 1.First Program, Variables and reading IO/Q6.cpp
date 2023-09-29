//Write a C++ program to swap two numbers with the help of a third variable.

#include<iostream>
using namespace std;

int main(){
    
    int x= 10;
    int y = 20;
    cout<<"Before swapping: "<<endl<<x<<" and " <<y<< endl;
    int temp ;
    temp = x;
    x=y;
    y=temp;
    cout <<"After Swapping"<<endl<<x<<" and " <<y<<endl;

    return 0;
}