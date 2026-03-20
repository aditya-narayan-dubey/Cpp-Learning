#include <iostream>
using namespace std;
int main()
{
    int guess;
    int secret = 18;
    int attempts = 5;
    
    cout<<"Guess the number Nigaa: ";
    cin>>guess;

    while(guess != secret){

        if(guess > secret){
            cout<<"Think lower Nigga: ";
        }
        else{
            cout<<"Think higher Nigga: ";
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