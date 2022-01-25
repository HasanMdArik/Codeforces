#include <iostream>
using namespace std;

int main()
{
    int w, n, k;
    cin >> k >> n >> w;

    int result = k * (w * (w + 1) / 2) - n;

    cout << (result < 0 ? 0 : result) << endl;
}