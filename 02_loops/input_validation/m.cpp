// problem: Ask the user to enter a number between 1 and 100.Reject invalid input and keep asking until valid.

#include <iostream>
using namespace std;
int main(){
    int number;
    
    do{
        cout<<"Enter the number between 1 and 100:";
        cin>>number;
        if(number>=0 && number<=100){
        cout<<"Accepted!"<<endl;}
    else
     {cout<<"Invalid! Try again."<<endl;}
    }while(number<1 || number>100);
}