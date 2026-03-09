#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;

    int count = 0;
    int temporary = n;
    
    if (temporary == 0){
        count=1;
    }
   while(temporary != 0){
    temporary = temporary /10;
    count++;
   }
  cout<<"Number of digits:"<<count<<endl;
  return 0;
    }