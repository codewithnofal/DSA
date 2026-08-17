#include <iostream>
using namespace std;

// int main()
// {
//     int i, j;

//     for (i = 1; i <= 5; i++)
//     {
//         for (j = 1; j <= 5; j++)
//         {
//             cout << 4 << " ";
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     int i, j;

//     for (i = 1; i <= 5; i++)
//     {
//         for (j = 1; j <= 5; j++)
//         {
//             cout << j * j << " ";
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     int i, j;

//     for (i = 1; i <= 5; i++)
//     {
//         for (j = 1; j <= 6; j++)
//         {
//             cout << j * j * j << " ";
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     int i;
//     char j;

//     for (i = 1; i <= 5; i++)
//     {

//         for (j = 'F'; j <= 'K'; j++)
//         {
//             cout << j << " ";
//         }
//         cout << endl;

// int main()
// {
//     int i, j, n;
//     cout << "Enter a number: ";
//     cin >> n;

//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j <= n - i + 1; j++)
//         {
//             char name = 'A' + j - 1;
//             cout << name << " ";
//         }
//         cout << endl;
//     }
// }

int main()
{
    int i, j, n;

    cout << "Enter a number: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (j = n; j > n-i; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
