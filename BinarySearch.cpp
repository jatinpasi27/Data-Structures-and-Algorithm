#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n=5;
    int arr[n] = {1,2,3,4,5};
    int st = 0,end = n-1;
    int key = 2;
    while(st<=end){
    int mid = (st+end)/2;
    if(arr[mid]==key){
        cout<<"Key found on the idx : "<<mid;
        break;
    }
    else if(arr[mid]>key){
        end = mid-1;
    }
    else{
        st = mid+1;
    }
    

    }
    return 0;
}