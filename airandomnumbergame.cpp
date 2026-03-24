#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));

    int secret = rand() % 10 + 1;
    int guess;
    int attempts = 0;

    cout<<"Guess the number (1 to 10): ";

    while(true)
    {
        cin>>guess;
        attempts++;

        if(guess == secret)
        {
            cout<<"Correct "<<endl;
            cout<<"Attempts: "<<attempts;
            break;
        }
        else if(guess > secret)
        {
            cout<<"Too high Try again: ";
        }
        else
        {
            cout<<"Too low Try again: ";
        }
    }

    return 0;
}