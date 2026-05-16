#include <iostream>
using namespace std;
// K times right rotation of an array.
int main()
{
    int n = 7;
    int arr[n] = {1, 2, 3, 4, 5, 6, 7};
    int k;
    cout << "Enter the value of k:";
    cin >> k;
    k = k % 10;
    int arr1[k];

 //Copying the elements to the new array
    for (int i = 0; i < k; i++)
    {
        arr1[i] = arr[n-k+i];
      
    }
    //Shifting the elements
    for (int i = n-1; i >= k; i--)
    {
        arr[i] = arr[i-k];
    }

   //Copyback the stored elements in the new arry;
   for (int i = 0; i < k; i++)
   {
    arr[i] = arr1[i];
   }
   
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}