#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int largestnum=0;
    int arr[n]= {4,7,6,8,3};

    for(int i = 0; i<n; i++){
        if(largestnum < arr[i]){
            largestnum = arr[i];
        }
    }

    cout << "ANss is: "<<largestnum;
}