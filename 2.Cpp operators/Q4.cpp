//Write a program to calculate the sum of the first and the second last digit of a 5 digit number.

#include<iostream>
using namespace std;

int main(){
    int a = 12345;
    int first = a/10000;
    int last = a%10;
    cout<< "Sum of First and Second Last Digit: "<<first+last;
    

    return 0;
}

// Sum of First and Second Last Digit: 6