#include <iostream>
#include <vector>
using namespace std;

void movePosNeg(vector<int>& v) {
    int n = v.size();
    vector<int> result(n);
    int j = 0;

    
    for (int i = 0; i < n; i++) {
        if (v[i] < 0) {
            result[j++] = v[i];
        }
    }


    for (int i = 0; i < n; i++) {
        if (v[i] >= 0) {
            result[j++] = v[i];
        }
    }

    
    for (int i = 0; i < n; i++) {
        v[i] = result[i];
    }

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
}

int main()
{
    vector<int> vec = {23, -4, 8, 2, -11, -5, 9};
    movePosNeg(vec);
    return 0;
}