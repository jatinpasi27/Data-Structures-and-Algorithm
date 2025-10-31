#include<iostream>
using namespace std;
int main(){
    //Prime number
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    bool isPrime = true;
    for (int i = 2; i <= num-1; i++)
    {
        if (num%i==0)
        {
            isPrime = false;
            break;
        }else{
            isPrime = true;
        }
        
    }
    if (isPrime)
    {
        cout<<"The number is Prime."<<endl;
    }else{
        cout<<"The number is Composite."<<endl;
    }
    
    
    return 0;
}