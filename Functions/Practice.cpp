#include<iostream>
using namespace std;

//product of 2 no.s
int product(int a,int b){
    int pro = a*b;
    return pro;
}

//odd or even number
void OddEve(int num){
    // if (num%2==0)
    // {
    //     cout<<"The number is Even.";
    // }else{
    //     cout<<"The number is Odd.";
    // }
    (num%2==0)?cout<<"Even number":cout<<"Odd number"<<endl;
    
}
int main(){
cout<<"The product is: "<<product(4,2)<<endl;
OddEve(4541);
return 0;
}