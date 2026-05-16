#include<iostream>
using namespace std;
int main(){
    int a = 34;
    int *ptr = &a;
    int b = 23;
    int *ptr2 = &b;
    cout<<"The sum is: "<<*ptr+*ptr2<<endl;
    return 0;
}