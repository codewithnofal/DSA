#include <iostream>
using namespace std;

// 1.calculate power of number.

// int main()
// {
//     int n, i, pow, num;

//     cout << "enter your number: ";
//     cin >> n;
//     cout << "enter a power: ";
//     cin >> pow;

//     num = n;

//     for (i = 1; i < pow; i++)
//     {
//         num *= n;
//     }
//     cout << num;
// }

// int main()
// {
//     int n, i;
//     cout << "Enter a number: ";
//     cin >> n;

//     if (n < 2)
//     {
//         cout << "Not Prime";
//         return 0;
//     }
//     else
//     {
//         for (i = 2; i < n; i++)
//         {
//             if (n % i == 0)
//             {
//                 cout << "Not Prime";
//                 return 0;
//             }
//         }
//         cout << "Prime";
//         return 0;
//     }
// }

// fibonacci num.

int main()
{
    int n, i, curr, last = 0, prev = 1;
    cout << "Enter a Number: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        curr = prev + last;
        last = prev;
        prev = curr;
    }
    cout << last;
}