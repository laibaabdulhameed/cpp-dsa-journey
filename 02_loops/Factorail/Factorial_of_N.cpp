// Problem: find the factorial.
// concepts:Input/output,for loop.


#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number:"<<endl;
    cin>>n;
    int factorial = 1;
    for(int i=1;i<=n;i++){
        factorial = factorial * i;
     }
     cout<<"factorial="<<factorial<<endl;}