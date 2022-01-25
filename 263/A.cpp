#include <iostream>

using namespace std;

// https://codeforces.com/problemset/problem/263/A

int main(int argc, char const *argv[])
{
    int columnOf1, rowOf1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int cell;
            cin >> cell;
            if (cell == 1)
            {
                columnOf1 = j;
                rowOf1 = i;
                break;
            }
        }
    }

    int horizontalMoves = abs(rowOf1 - 2);
    int verticalMoves = abs(columnOf1 - 2);

    cout << (horizontalMoves + verticalMoves) << endl;

    return 0;
}
