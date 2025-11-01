// assignment
#include<iostream>
using namespace std;

char charReturn(char c){
    if (c == 'z')
    {
        return 'a';
    }
    
   return c + 1;
}
int main()
{
    cout<<charReturn('D')<<endl;
    return 0;
}