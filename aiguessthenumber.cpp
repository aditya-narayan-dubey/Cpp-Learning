#include <iostream>
using namespace std;
int main(){
int guess;
int secret=65;
int attempts=0;

cout<<"Go ahead Choose ur number: ";
cin>>guess;

while(guess != secret)
{
    attempts;

if(guess > secret){
    cout<<"U are thinking too high number choose a lower one🤪🤪: ";
}
else{
    cout<<"U are thinking too low number choose a higher one🤪🤪: ";
}
cin>>guess;}
attempts++;

cout<<"U did it😒😒😒😒😒😒😒😒😒😒😒😒😒"<<endl;
cout<<"U took "<<attempts<<" attempt u r GOOD🤣🤣🤣🤣🤣🤣🤣🤣";
return 0;
}
