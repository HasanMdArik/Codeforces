#include <iostream>
using namespace std;

// https://codeforces.com/contest/1335/problem/A

int main() {
    int t;
    cin >> t;

    int possibilities[t] = {};

    for (int i= 0; i < t; i++) {
        int n, possibleWays;
        cin >> n;

        if (n%2==0) {
            possibleWays = (n/2) -1;
        } else {
            possibleWays = (n-1) /2;
        }
        possibilities[i] = possibleWays;
    }

    for (int i = 0; i < t; i++) {
        cout << possibilities[i] << endl;
    }


    return 0;
}