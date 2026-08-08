#include <iostream>
using namespace std;

int main()
{
    int package;
    cout << "Enter Package: ";
    cin >> package;

    if (package > 10)
    {
        cout << "accepted";
    }
    else
    {
        cout << "rejected";
    }
}