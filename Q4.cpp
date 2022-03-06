#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[15];
    cout << "Enter a word :"
         << "\n";
    cin >> a;
    int length = strlen(a); // hello
    for (int i = length - 1; i >= 0; i--)
    {
        cout << a[i];
    }

    return 0;
}
