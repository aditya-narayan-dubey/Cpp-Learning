#include <iostream>
using namespace std;
int main()
{
    for (int i= 1; i <=5; i++){
        for (int j =1; j <=5; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
/*Output:
*****
*****
*****
*****
*****   nested loops means loops within the loops for int i part is taken for (rows) and for int j part is taken for (columns/*within a line of rows)   */