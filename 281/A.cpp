#include <iostream>

using namespace std;

int main()
{
    string x;
    cin >> x;

    x[0] = toupper(x[0]);

    cout << x << endl;

    return 0;
}
