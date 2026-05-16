#include<iostream>
using namespace std;
void sayHello(){
    cout<<"Hello!!!"<<endl;
}
void HelloHelp(){ //Helper function to call hello.
    sayHello();
    cout<<"WorkDone";
}

int main(){
HelloHelp();
return 0;
}