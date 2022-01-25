#include <iostream>

using namespace std;

int main()
{
    int limak, bob;

    cin >> limak >> bob;

    int result = 0;

    while (limak <= bob)
    {

        result++;
        bob *= 2;
        limak *= 3;
    }

    cout << result << endl;
}
