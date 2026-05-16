#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    int n,val;
    cout<<"Enter the size of an array:";
    cin>>n;
    cout<<"Start Entering the elements:";
    for (int i = 0; i < n; i++)
    {
        cin>>val;
        v.push_back(val);
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
