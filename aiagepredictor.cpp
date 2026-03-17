#include <iostream>
using namespace std;
int main()
{
    int BirthYear;
    int CurrentYear = 2026;

    cout<<"Enter your Birth Year: ";
    cin >> BirthYear;

    int age = CurrentYear - BirthYear;

    cout<<"Your AI predicted Age is: "<<age<<endl;

}