//Butterfly pattern
//Diamond pattern
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows:";
    cin >> n;
    // 1st upper side
    for (int i = 1; i <= n; i++)
    {
        //stars
        for (int j = 1; j <=i; j++)
        {
            cout<<"*"<<" ";
        }
        //space
        for (int k = 1; k <= 2*(n - i); k++)
        {
            cout<<" "<<" ";
        }
        //stars
        for (int j = 1; j <=i; j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
 
// Bottom side
   for (int i = n; i >= 1; i--)
    {
        //stars
        for (int j = 1; j <=i; j++)
        {
            cout<<"*"<<" ";
        }
        //space
        for (int k = 1; k <= 2*(n - i); k++)
        {
            cout<<" "<<" ";
        }
        //stars
        for (int j = 1; j <=i; j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
  
    return 0;
}