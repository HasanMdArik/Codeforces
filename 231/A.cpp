#include <iostream>

using namespace std;

// https://codeforces.com/problemset/problem/231/A

int main()
{
    int n, implementableQuestions;
    cin >> n;
    implementableQuestions = 0;

    for (int i = 0; i < n; i++)
    {
        int petya, vasya, tanya;
        cin >> petya >> vasya >> tanya;

        if (petya + vasya + tanya >= 2)
        {
            implementableQuestions++;
        }
    }

    cout << implementableQuestions;

    return 0;
}