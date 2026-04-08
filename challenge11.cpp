#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int smallestnum=10;
    int arr[n]= {4,7,6,8,3};

    for(int i = 0; i<n; i++){
        if(smallestnum > arr[i]){
            smallestnum = arr[i];
        }
    }

    cout << "ANss is: "<<smallestnum;
}