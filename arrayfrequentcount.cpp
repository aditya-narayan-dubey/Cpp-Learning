# include <iostream>
using namespace std;
int main(){

    int n=6;
    int count=0;
    int element=2;
    int arr[n]={1,2,2,3,4,2};

    for (int i= 0; i<n; i++){

        if(arr[i]==element){
            count++;
        }
    }
    cout<<"Your Element's Frequency is: "<<count;
    return 0;
}