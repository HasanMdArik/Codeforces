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

    for (int test = 0; test < t; test++)
    {
        int n;
        cin >> n;

        int buildings = n + 1;

        int iterationTimes[buildings];

        for (int i = 0; i < buildings; i++)
        {
            int input;
            cin >> input;
            iterationTimes[i] = input;
        }
    }
    return 0;
}
