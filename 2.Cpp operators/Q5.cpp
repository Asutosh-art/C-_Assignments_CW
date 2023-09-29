// Write a program to calculate the sum of digits of a 3 digit number.

#include<iostream>
using namespace std;

int main(){
    int num = 537;
    int a=num/100;
    num%=100;
    int b = num/10;
    int c = num%10;
    
    cout<<a+b+c<<" ";


    return 0;
}