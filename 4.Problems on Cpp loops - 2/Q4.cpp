// Q4 - Write a program to reverse a given integer number.

#include<iostream>
using namespace std;

int main(){
    
    cout<<"Enter the value of n: ";
    int num, rev=0 , rem ;
    cin>>num;
    while(num!=0){
        rem = num%10;
        rev=(rev*10)+rem;
        num/=10;
    }
    cout<<"\nReverse is "<<rev;
    return 0;
}