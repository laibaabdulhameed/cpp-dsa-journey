// # How to covert temperature from calsius to  fahrenheight
// Concepts: Input/Output
// Difficulty level: Beginner

#include <iostream>
using namespace std;
int main(){
    float temperature_in_celsius, Fahrenheight;
    cout<<"Enter the temperature in Celsius:";
    cin>>temperature_in_celsius;
    Fahrenheight= (temperature_in_celsius*1.8)+32;
    cout<<temperature_in_celsius<<" C is equal to " << Fahrenheight << " F" << endl;
    return 0;

}