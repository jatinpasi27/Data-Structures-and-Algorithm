#include<iostream>
using namespace std;
//Prime number
bool isPrime(int n){
    if (n==1)
    { 
        return true;
    }
    
    bool isprime = true;
    for (int i = 2; i <= n-1; i++)
    {
        if (n%i==0)
        {
            isprime = false;
            break;
        }
        
    }
    return isprime;
    
}

int main(){
    if (isPrime(10))
    {
        cout<<"The number is Prime."<<endl;
    }else{
        cout<<"The number is Composite"<<endl;
    }
    

    return 0;
}