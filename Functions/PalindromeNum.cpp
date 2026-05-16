//assignment of palindrome
#include<iostream>
using namespace std;

bool checkPalindrome(int n){
int rev = 0;
int num = n;

while (n>0)
{
    int r = n%10;
    rev = rev*10 + r;
    n = n/10;
}
if (rev==num)
{
    return true;
}else{
    return false;
}



}
int main(){
    if (checkPalindrome(7571))
    {
        cout<<"Palindrome number.";
    }else{
        cout<<"Not a Palindrome.";
    }
    return 0;
}