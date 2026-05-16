#include<iostream>
using namespace std;
void print(int *arr,int n){
    cout<<"The array is: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
void arrInput(int *arr,int n){

    cout<<"Start entering the elements:";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    print(arr,n);
}

int main(){
    int size;
    cout<<"Enter the size of an array:";
    cin>>size;
    int arr[size];
    arrInput(arr,size);
    return 0;
}