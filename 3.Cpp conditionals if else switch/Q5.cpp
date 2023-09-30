// Q5- Create a calculator using switch statement to perform addition, subtraction, multiplication
// and division.

#include<iostream>
using namespace std;

int main(){
    
    char op;
    int num1,num2;
    cout<<"Enter the first number: "; 
    cin>>num1;
    cout<<"Enter the second number :";
    cin>>num2;
    cout<<"Enter a operator";
    cin>>op;
    switch(op){
        case '+':
            cout << " The sum of " << num1 <<" + "<<  num2 << " is = " << (num1+num2);
            break;
        case '-':
            cout << " The difference of " << num1 <<" - "<<  num2 << " is = " << (num1-num2);
            break;
        case '*':
            cout << " The product of " << num1 <<" * "<<  num2 << " is = " << (num1*num2);
            break;
        case '/':
            cout << " The division of " << num1 <<" / "<<  num2 << " is = " << (num1/num2);
            break;
        default:
            cout << "\a Invalid operator!";
            break;
        
    }

return 0;
}