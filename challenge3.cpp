#include <iostream>
using namespace std;
int main()
{
    int num1,num2;
    char operation;

    cout<<"Enter your first number: ";
    cin>>num1;

    cout<<"Enter your second number: ";
    cin>>num2;

    cout<<"Enter your operation(+,-,*,/,%): ";
    cin>>operation;

    float total1 = num1 + num2;
    float total2 = num1 - num2;
    float total3 = num1 * num2;

    cout<<"Result: "<<total1<<endl;
    cout<<"Result: "<<total2<<endl;
    return 0;
}