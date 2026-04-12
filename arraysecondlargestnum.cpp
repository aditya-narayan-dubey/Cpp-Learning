#include <iostream>
using namespace std;
int main(){
    int largestnum=0;
    int n= 5;
    int arr[n]={55,65,75,85,95};

    for (int i=0;i <n;i++){
        if(largestnum < arr[i] && arr[i] < 95)
        largestnum = arr[i];
    }
    cout<<"Your second largest number is: "<<largestnum;
}