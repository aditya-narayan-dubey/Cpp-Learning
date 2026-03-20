#include <iostream>
using namespace std;
int main()
{
    int marks;

    cout<<"Enter your Marks: ";
    cin>>marks;

    if(marks >= 90){
        cout<<"Genius detected";
    }
    else if(marks >= 70){
        cout<<"Good job";
    }
    else if(marks >= 50){
        cout<<"Passed";
    }
    else if(marks < 50){
        cout<<"Study more";
    }
    else{
        cout<<"Marks not Detected";
    }
    return 0;
}