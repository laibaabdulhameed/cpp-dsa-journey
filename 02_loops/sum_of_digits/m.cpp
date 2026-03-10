Problem:Find the sum of digits in a number.
main concept1: %10 READ the last digit and keep it.
main concept2: /10 REMOVE the last digit and shrink number.

#include <iostream>
using namespace std;
int main(){
    int sum = 0;
    int number;
    cout<<"Enter the number:";
    cin>>number;
    while(number!=0){
    sum = sum + (number%10);
    number = number/10;
}
cout<<"Sum:"<<sum;
}