#include <iostream>
using namespace std;

void swap(int &a, int&b){

    int temp=a;
    a=b;
    b=temp;
}
int main(){

    int a=20;
    int b=30;

    cout<<"Your swapped value is: ";
    swap(a,b);
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b;
}