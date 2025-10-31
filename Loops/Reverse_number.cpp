#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int rev = 0;
    int n = num;
    while (num > 0)
    {
        int r = num % 10;
        rev = rev * 10 + r;
        num /= 10;
    }
cout<<"The reversed number is : "<<rev<<endl;
    return 0;
}