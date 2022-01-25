#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    int damaged = 0;

    for (int i = 1; i <= d; i++)
    {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
        {
            damaged++;
        }
    }

    cout << damaged;

    return 0;
}
