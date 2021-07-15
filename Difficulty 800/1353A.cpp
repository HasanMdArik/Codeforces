#include <iostream>
#include <cmath>
using namespace std;

// https://codeforces.com/problemset/problem/1353/A

int main(int argc, char const *argv[])
{
    int t;
    int *results = NULL;
    cin >> t;
    results = new int[t];

    for (int i = 0; i < t; i++)
    {
        int n, m;
        cin >> n >> m;
        int nonZeroNums = floor(n / 2);
        int sumOfDiffBetweenAdjacents = 0;
        if (nonZeroNums >= 1)
        {
            sumOfDiffBetweenAdjacents = min(2, n - 1) * m;
        }
        results[i] = sumOfDiffBetweenAdjacents;
    }

    for (int i = 0; i < t; i++)
    {
        cout << results[i] << endl;
    }

    return 0;
}
