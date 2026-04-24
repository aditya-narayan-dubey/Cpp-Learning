#include <iostream>
using namespace std;
int main()
{
    int guess;
    int seceret=5;

    cout<<"Guess the number: ";
    cin>>guess;

    while(guess != seceret){
        cout<<"Try again: ";
        cin>>guess;
    }
    cout<<"U did it";
    return 0;
}
