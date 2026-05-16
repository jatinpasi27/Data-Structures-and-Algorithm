#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
      //spaces
      for (int j = 1; j <= (n-i); j++)
      {
        cout<<" "<<" ";
      }
      //backward Numbers
      for (int k = i; k >= 1; k--)
      {
        cout<<k<<" ";
      }
      //forward numbers
      for (int f = 2; f <= i; f++)
      {
        cout<<f<<" ";
      }
      
      cout<<endl;
    }

    return 0;
}