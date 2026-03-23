#include <iostream>
using namespace std;

int main()
{
    int pin;
    int correctpin = 1234;
    int attempts = 0;
    int maxattempts = 3;

    while(attempts < maxattempts)
    {
        cout<<"Enter the ATM pin: ";
        cin>>pin;

        attempts++;

        if(pin == correctpin){
            cout<<"Access Granted";
            break;
        }
        else{
            cout<<"Wrong pin try again\n";
        }
    }

    if(pin != correctpin){
        cout<<"Access Blocked";
    }

    return 0;
}