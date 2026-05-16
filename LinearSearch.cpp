#include<iostream>
using namespace std;
int main(){
    int n = 6;
    int arr[n] = {1,2,4,534,56,4};
    int key = 534;
    bool found = false;
    int idx = 0;
    for (int i = 0; i <n ; i++)
    {
        if (arr[i]==key)
        {
            idx = i;
            found = true;
        }
        
    }
    if(found){
        cout<<"Key found present at idx : "<<idx<<endl;
    }
    else{
        cout<<"Key not found.";
    }
    return 0;
}