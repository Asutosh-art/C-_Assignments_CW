// Q4- Write a program to print positive number entered by the user, if user enters a negative
// number, it is skipped.

#include<iostream>
using namespace std;

int main(){
    
    int x;
    cout<<"Enter a integer"<<endl;
    cin>>x;
    if(x>=0){
        cout<<x<<endl;
    }else{
        cout<<"The Number is negative and skipped"<<endl;
    }

return 0;
}