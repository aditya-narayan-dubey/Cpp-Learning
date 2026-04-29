#include <iostream>
using namespace std;
int main(){
    int n=5;
    int key;
    bool found = false;
    int arr[n]={45,56,66,67,89};
    cout<<"Enter your key: ";
    cin>>key;

    for (int i = 0; i<n;i++){


        if (key==arr[i]){
        cout<<"Element found on: "<<i<<endl;
        found=true;
        }

    }
    if (!found){
        cout<<"Element not found"<<endl;
    }
    return 0;

}