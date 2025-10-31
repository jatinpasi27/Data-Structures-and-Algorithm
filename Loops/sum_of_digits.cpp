#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int n = num;
    int sum = 0;
    while (num>0)
    {
        int r = num % 10;
        sum += r;
        num = num/10;
    }
    cout<<"The sum of all the digits are : "<<sum<<endl;
    return 0;
}