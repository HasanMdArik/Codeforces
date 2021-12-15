#include <iostream>
using namespace std;

void bubbleSort(int array[], int size)
{
    for (int i = size; i > 0; i--)
    {
        for (int j = 1; j < i; j++)
        {
            if (array[j] < array[j - 1])
            {
                int temp = array[j];
                array[j] = array[j - 1];
                array[j - 1] = temp;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;

    for (int testCases = 0; testCases < t; testCases++)
    {
        int n, l, r, k;
        cin >> n >> l >> r >> k;

        int *prices = new int[n];

        for (int i = 0; i < n; i++)
        {
            cin >> prices[i];
        }

        bubbleSort(prices, n);

        int result = 0;
        int expense = 0;

        for (int i = 0; i < n; i++)
        {
            int valueOfChoco = prices[i];

            if (valueOfChoco <= r && valueOfChoco >= l)
            {
                if ((expense + valueOfChoco) <= k)
                {
                    result++;
                    expense += valueOfChoco;
                }
                else
                {
                    break;
                }
            }
        }

        delete prices;

        cout << result << endl;
    }

    return 0;
}
