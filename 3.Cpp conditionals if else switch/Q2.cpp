// Q2.Write a program to print absolute value of a number entered by the user.

#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter any integer: ";
    cin>>x;
    if(x<0){
        x=x*(-1);
    }

    cout<<"The absolute value of the number enetred is "<<x<<endl;

    

return 0;

}