#include <iostream>
using namespace std;
int main()
{
    string name;
    int birthyear;
    int currentyear = 2026;

    cout<<"Enter your name: ";
    getline(cin,name);

    cout<<"Enter your birthyear: ";
    cin>>birthyear;

    int age = currentyear - birthyear;

    cout<<"Your age in 2026 will be "<<age<<endl;
    cout<<"AI Prediction complete";
    return 0;
}