#include <iostream>
using namespace std;
void change(float &area, int r){

area = (3.14)*r*r;

}

int main(){
    
    int radius;
    float area;
    cout<<"Enter the radius of Circle: ";
    cin>>radius;

    change(area,radius);
    cout<<"Area: "<<area;
    return 0;
}