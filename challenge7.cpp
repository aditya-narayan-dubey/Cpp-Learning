#include <iostream>
using namespace std;
int main()
{
    int pin;
    int correctpin = 1234;
    int attempts = 0;
    int maxattempts = 3;

    cout<<"Enter the ATM pin: ";
    cin>>pin;

    while(pin != correctpin && attempts < maxattempts){
        attempts++;
        if(pin != correctpin){
            cout<<"Wrong pin try again: ";
        }
        else{
            cout<<"Access Granted";
        }
        cin>>pin;
    }

    if(pin == correctpin){
        cout<<"Access Granted";
    }
    else{
        cout<<"Access Blocked";
    }
    
    return 0;
}