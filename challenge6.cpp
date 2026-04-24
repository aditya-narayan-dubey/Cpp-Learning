#include <iostream>
using namespace std;
int main()
{
    int guess;
    int secret = 18;
    int attempts = 5;
    
    cout<<"Guess the number: ";
    cin>>guess;

    while(guess != secret){

        if(guess > secret){
            cout<<"Think lower: ";
        }
        else{
            cout<<"Think higher: ";
        }
        cin>>guess;
    }
if(guess > attempts){
    cout<<"U failed";
}
else{
    cout<<"U did it";
}
return 0;
}
