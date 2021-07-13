#include <bits/stdc++.h>
using namespace std;

int main()
{

    string firstWord, secondWord;
    cin >> firstWord >> secondWord;
    int result = 0;
    for (int i = 0; i < firstWord.length(); i++)
    {
        int firstWordLetterValue = bitset<8>(tolower(firstWord[i])).to_ulong();
        int secondWorLetterValue = bitset<8>(tolower(secondWord[i])).to_ulong();
        if (firstWordLetterValue > secondWorLetterValue)
        {
            result = 1;
            break;
        }
        else if (firstWordLetterValue < secondWorLetterValue)
        {
            result = -1;
            break;
        }
    }

    cout << result;

    return 0;
}