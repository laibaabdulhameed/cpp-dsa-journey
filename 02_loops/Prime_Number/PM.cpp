#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Number:"<<endl;
    cin>>n;
    bool isPrime=true;
    if(n<=1){
        isPrime=false;
    }
    for(int i=2;i*i<=n;i++){
        if (n%i==0 ){
            isPrime=false;
            break;
        }
         }
    if(isPrime){
        cout<<" prime number:"<<n<<endl;
    }
    else{
        cout<<"not prime:"<<n<<endl;
        }
    
    }