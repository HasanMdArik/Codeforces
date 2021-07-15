// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     string problem;
//     cin >> problem;

//     int ones = 0;
//     int twos = 0;
//     int threes = 0;

//     for (int i = 0; i < problem.length(); i++)
//     {
//         // if (problem[i] == "1")
//         // {
//         //     ones++;
//         // }
//         // if (problem[i] == "2")
//         // {
//         //     twos++;
//         // }
//         // else if (problem[i] == "3")
//         // {
//         //     threes++;
//         // }
//         cout << (problem[i] == "3") << endl;
//         i++;
//     }

//     string result = "";

//     for (int i = 0; i < ones; i++)
//     {
//         if (result.length() == 0)
//         {
//             result += "1";
//         }
//         else
//         {
//             result += "+1";
//         }
//     }
//     for (int i = 0; i < twos; i++)
//     {
//         if (result.length() == 0)
//         {
//             result += "2";
//         }
//         else
//         {
//             result += "+2";
//         }
//     }
//     for (int i = 0; i < ones; i++)
//     {
//         if (result.length() == 0)
//         {
//             result += "3";
//         }
//         else
//         {
//             result += "+3";
//         }
//     }

//     cout << result << endl;
//     return 0;
// }
