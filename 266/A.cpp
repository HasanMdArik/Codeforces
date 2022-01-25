#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    string combination;

    cin >> n;
    cin >> combination;

    char prevColor = combination[0];
    int needsToChange = 0;
    for (int i = 1; i < n; i++)
    {
        if (combination[i] == prevColor)
        {
            needsToChange++;
        }
        prevColor = combination[i];
    }

    cout << needsToChange;

    return 0;
}
