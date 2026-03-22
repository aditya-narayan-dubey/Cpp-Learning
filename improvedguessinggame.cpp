#include <iostream>
using namespace std;

int main()
{
    int secret = 18;
    int guess;
    int attempts = 0;
    int maxAttempts = 5;

    while(attempts < maxAttempts)
    {
        cout << "Guess the number: ";
        cin >> guess;

        attempts++;

        if(guess == secret)
        {
            cout << "You did it 🎉" << endl;
            break;
        }
        else if(guess > secret)
        {
            cout << "Too high! Try again\n";
        }
        else
        {
            cout << "Too low! Try again\n";
        }
    }

    if(guess != secret)
    {
        cout << "You failed 😢" << endl;
    }

    return 0;
}