#include <iostream>
using namespace std;

int main(){
    // the const keyword specifies that a variable's value is constant and cannot be changed.
    // tells the compiler to prevent anything from modifying it
    // (read-only)
    const double PI = 3.14;
    //PI = 3.14159; // This will cause an error
    double radius = 5.0;
    double circumference = 2 * PI * radius;
    cout << circumference << "cm";
    return 0;
}