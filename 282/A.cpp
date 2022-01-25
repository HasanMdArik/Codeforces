#include <iostream>

using namespace std;

int main()
{
    int n, x;
    cin >> n;
    x = 0;

    for (int i = 0; i < n; i++)
    {
        string statement;
        cin >> statement;

        if (statement == "++X" || statement == "X++" || statement == "++")
        {
            x++;
        }
        else if (statement == "--X" || statement == "X--" || statement == "--")
        {
            x--;
        }
    }

    cout << x;

    return 0;
}
