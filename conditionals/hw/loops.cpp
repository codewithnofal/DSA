#include <iostream>
using namespace std;

// int main()
// {
//     for (int i = 1; i <= 20; i++)
//     {
//         cout << "i must crack MANGO till 2028 \n";
//     }
// }

// 2. odd numbers from 1 to n;

// int main()

// {
//     int n;
//     cout << "Enter Number: ";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         if (i % 2 != 0)
//         {
//             cout << i << endl;
//         }
//     }
// }

// 3. print number which is devisable by 4.

int main()

{
    int n;
    cout << "Enter Number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 4 == 0)
        {
            cout << i << endl;
        }
    }
}