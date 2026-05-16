#include <iostream>
#include <vector>
#include<climits>
using namespace std;
int main()
{
    int k;
    vector<int> vec = {3,6,8,4,9};
    cout << "Enter the kth value :";
    cin >> k;
    int Kthmax = INT_MIN;
    for (int i = 0; i < k; i++)
    {
        int currMax = INT_MIN;
        for (int j = 0; j < vec.size(); j++)
        {
            if ( vec[j]>currMax && vec[j]< Kthmax)
            {
                    currMax = vec[j];
            }
            if (i==0 && vec[j]>currMax)
            {
                currMax = vec[j];
            }
            
        }
        Kthmax = currMax;
    }
    cout<<"Kth Max value is:"<<Kthmax<<endl;
    return 0;
}