#include <iostream>
using namespace std;

// https://codeforces.com/problemset/problem/158/A

int main()
{
    int n, k;
    cin >> n >> k;
    int x[n] = {};
    for (int i=0;i<n;i++){
        cin >> x[i];
    }
    int qualifying = 0;
    
    for (int i = 0; i < n; i++){
        if (x[i] > 0 && x[i] >= x[(k-1)]) {
            qualifying++;
        }
    }

    cout << qualifying;
    delete [] x;

    return 0;
}
