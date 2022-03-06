#include <iostream>
using namespace std;

int main()
{
    int a[5];
    int *p;
    cout << "Enter 5 numbers:"
         << "\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    p = &a[0];

    cout << "Enter values are :"
         << "\n";
    for (int i = 0; i < 5; i++)
    {
        cout << *p << "\n";
        p = p + 1;
    }

    return 0;
}
