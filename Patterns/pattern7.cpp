//Modification of hollow rectangle
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "*" << " ";
        for (int j = 1; j <= n - 1; j++)
        {
            if (i == 1 || i % 2 != 0)
            {
                cout << "*" << " ";
            }
            else
            {
                cout << " " << " ";
            }
        }
        cout << "*";
        cout << endl;
    }
    return 0;
}