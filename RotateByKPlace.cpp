#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v = {1,2,3,4,5,6,7};
    vector<int> v2;
    int k;
    cout<<"Enter the k:";
    cin>>k;
    k = k%10;
    int val;
    for (int i = 0; i < k; i++)
    {
        val = v[i];
        v2.push_back(val);
    }
    // for(int i = 0;i<v2.size();i++){
    //     cout<<v2[i]<<" ";
    // }
    for (int i = k; i < v.size(); i++)
    {
        v[i-k] = v[i];
    }
    int j = 0;
    for(int i = v.size()-k;i<v.size();i++){
       v[i] = v2[j];
       j++;
    }
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
