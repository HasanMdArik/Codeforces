#include <iostream>
#include <cmath>
using namespace std;

// https://codeforces.com/problemset/problem/50/A

int main() {
    int m, n;
    cin >> m >> n;
    int result = floor(m*n/2);
    cout << result;
    return 0;
}