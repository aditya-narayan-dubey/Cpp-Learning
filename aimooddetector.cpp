#include <iostream>
using namespace std;
int main()
{
    int mood;

    cout<<"Enter mood number (1happy, 2sad, 3angry): ";
    cin>> mood;

    if(mood == 1){
        cout<<"keep smiling and be happy 😊 just like Aditri keeps smiling";
    }
    else if(mood == 2){
        cout<<"dont feel sad watch Aditri's face and be happy";
    }
    else if(mood == 3){
        cout<<"Take a deep breath and troll Aditri u will be Happy 😎";
    }
    else{
        cout<<"Invalid number";
    }
    return 0;
}