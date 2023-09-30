// Q1 - Write a program which takes the values of length and breadth from user and check if it is
// a square or not.

#include<iostream>
using namespace std;

int main(){
    int length,breadth;
    cout<<"Enter Length: ";
    cin>>length;
    cout<<"Enter Breadth :"; 
    cin >> breadth ;
    if (length==breadth)
    {
        cout << "Square" << endl;
    }else{
        cout <<"Not A Square"<<endl;
    }
    

return 0;

}