#include<iostream>
using namespace std;

int fact(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
    
}

int binomialCoeff(int n, int r){
    int result = fact(n)/(fact(r)*fact(n-r));
    return result;
}

int main(){
    cout<<"The result of the combination is: "<<binomialCoeff(8,2)<<endl;
    return 0;
}