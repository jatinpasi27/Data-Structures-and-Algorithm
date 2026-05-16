// assignment
#include <iostream>
#include <cmath>
using namespace std;

int printwhole(int a, int b)
{
    int res = pow(a, 2) + 2 * (a * b) + pow(b, 2);
    return res;
}

int main()
{
    cout<<"The output is: "<< printwhole(2, 4) << endl;
    return 0;
}