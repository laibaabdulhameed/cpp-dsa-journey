// Problem: Collatz Sequence
// You are given a positive integer 
// Generate the Collatz sequence starting from using the following rules:
// If number is even, divide it by 2.
// If number is odd, multiply it by 3 and add 1.
// Repeat this process until 1 and also count steps.

// Concepts:Input/Output,while loop,conditinal statments.



#include <iostream>
using namespace std;
int main(){
    signed number ;
    int steps = 0;
    cout<<"Enter any positive integer:";
    cin>>number;

    while(number != 1){
        cout<<number<<endl;
        if (number%2==0){
            number = number/2;
        }
        else{
            number = number*3 +1;
        }
        steps++;
}
    cout<<1<<endl;
    cout<<"steps"<< steps <<endl;
    return 0;
}