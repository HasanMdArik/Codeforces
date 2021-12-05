#include <iostream>
using namespace std;

int main()
{

    string inp;
    cin >> inp;

    bool arrayChars[26] = {};

    int distinctChars = 0;

    for (int i = 0; i < inp.length(); i++)
    {
        if (!arrayChars[inp[i] - 97])
        {
            arrayChars[inp[i] - 97] = true;
            distinctChars++;
        }
    }

    if (distinctChars % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}