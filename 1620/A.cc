#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int testCases;
    cin >> testCases;

    for (int test = 0; test < testCases; test++)
    {
        string s;

        cin >> s;

        if (s.length() == 2 && s[0] != s[(s.length() - 1)])
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}
