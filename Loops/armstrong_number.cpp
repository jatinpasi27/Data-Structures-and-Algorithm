#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int num = n;
    int cubeSum = 0;
    while (n>0)
    {
        int rem = n % 10;
        cubeSum += rem*rem*rem;
        n /= 10; 
    }
    if (num == cubeSum)
    {
        cout<<"The number is armstrong."<<endl;
    }
 else{
    cout<<"The number is an ordinary number."<<endl;
 }   
 return 0;
}