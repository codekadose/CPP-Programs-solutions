/* Q4. Write a C++ program to input a word (max. length 15 characters)
 from user and print each of its characters on new line in Reverse order*/
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
