#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows:";
    cin >> n;
    bool b = true;
    for (int i = 1; i <= n; i++)
    {
       for (int j = 1; j <= i; j++)
       {
        cout<<b<<" ";
        
    }
    
    b = !(b);
    cout << endl;

    }
    return 0;
}