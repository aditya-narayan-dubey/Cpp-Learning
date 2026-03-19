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

    if(operation == '+'){
        cout<<"Result: "<<num1 + num2;
    }
    else if(operation == '-'){
        cout<<"Result: "<<num1 - num2;
    }
    else if(operation == '*'){
    cout<<"Result: "<<num1 * num2;
}
    else if(operation == '/'){
        cout<<"Result: "<<num1 / num2;
    }
    else if(operation == '%')
{
    cout<<"Result: "<< num1 % num2;
}
    else {
        cout<<"Ivalid Output";
    }
    return 0;
}