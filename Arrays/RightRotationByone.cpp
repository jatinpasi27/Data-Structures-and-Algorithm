#include<iostream>
using namespace std;
int main(){
    int n = 7;
    int arr[n] = {7,1,2,3,4,5,6};
    int temp = arr[n-1];
    for (int i = n; i > 0; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}