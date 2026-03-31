#include<iostream>
using namespace std;

int main() {
    int n = 14;
    int ct = 0;

    for(int i = 1;i <= n;i++){
        if(n%i==0){
            ct++;
        }
    }
    if(ct>2){
        cout << "Num is non prime";
    } else{
        cout << "Num is prime";
    }
    return 0;
}