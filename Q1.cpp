#include <iostream>
using namespace std;

int main()
{
    int f1 = 0, f2 = 1;
    cout << f1 << "\n";
    cout << f2 << "\n";
    int next;

    for (int i = 3; i <= 20; i++)
    {
        next = f1 + f2;
        cout << next << "\n";
        f1 = f2;
        f2 = next;
    }

    return 0;
}
