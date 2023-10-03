// Q1 - Write a program to calculate the factorial of a number.

#include<iostream>
using namespace std;

int main(){
    int num,factorial=1;
    int fact=0;
    cout<<"Enter any Number: ";
    cin>>num;
    while(num>1){
        factorial=factorial*num;
        num--;
    }
    cout<<"\nFactorial is "<<factorial;
    return 0;
}