#include<iostream>
using namespace std;

int add(int a,int b); //forward declaration
int diff(int a,int b=1){ //consider second arg as 1.
    int res = a - b;
    return res;
}

int add(int a,int b){ //defination 
    int res = a+b;
    return res;
}

int main(){
    cout<<"The sum is: "<<add(4,5)<<endl;
    cout<<"The difference is: "<<diff(3)<<endl; //only single para given since declaration is done abv.
    return 0;
}
