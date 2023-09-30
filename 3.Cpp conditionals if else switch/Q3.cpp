// Q3- Write a program to take input from user for Cost Price (C.P.) and Selling Price(S.P.) and
// calculate Profit or Loss.

#include<iostream>
using namespace std;

int main(){
    
    int cp,sp;
    cin>>cp>>sp;
    if(cp>sp){
        int loss=cp-sp;
        cout<<"Loss is "<<loss<<endl;
    }
    else{
        cout<<"Profit is "<<sp-cp<<endl;
    }
    

return 0;
}