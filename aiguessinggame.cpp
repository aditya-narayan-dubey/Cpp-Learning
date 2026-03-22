#include <iostream>
using namespace std;

int main()
{
    int guess;
    int secret = 18;
    int attempts = 0;
    int maxAttempts = 5;

    cout<<"Guess the number: ";
    cin>>guess;

    while(guess != secret && attempts < maxAttempts)
    {
        attempts++;

        if(guess > secret){
            cout<<"Think lower: ";
        }
        else{
            cout<<"Think higher: ";
        }

        cin>>guess;
    }

    if(guess == secret){
        cout<<"You did it 🎉";
    }
    else{
        cout<<"You failed 😢";
    }

    return 0;
}