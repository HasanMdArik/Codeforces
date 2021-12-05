#include <iostream>
using namespace std;

// https://codeforces.com/problemset/problem/732/A

int main(int argc, char const *argv[])
{
    int k, r;
    cin >> k >> r;

    int needsToBuy = 1;

    for (int i = 1; i <= 10; i++)
    {
        if (
            (k * i) % 10 == 0 ||
            ((k * i) % 10) == r)
        {
            needsToBuy = i;
            break;
        }
    }
    cout << needsToBuy << endl;

    return 0;
}
