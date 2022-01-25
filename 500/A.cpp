#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, t;
    int *cells = NULL;

    cin >> n >> t;
    t -= 1;
    cells = new int[n];

    for (int i = 0; i < n - 1; i++)
    {
        int cell;
        cin >> cell;
        cells[i] = cell;
    }

    int myPosition = 0;
    bool possibilityOfGoing = false;
    while (myPosition <= t)
    {
        myPosition = myPosition + cells[myPosition];
        if (myPosition == t)
        {
            possibilityOfGoing = true;
            break;
        }
    }

    if (possibilityOfGoing)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
