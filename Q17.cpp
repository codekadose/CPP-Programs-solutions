/* Q.17 Write a C++ program to accept a sentence (maximum 50 characters )
 and print sentence in reverse.*/

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[50];
    cout << "Enter a sentence :"
         << "\n";
    gets(str);
    int length = strlen(str);
    cout << "Sentence in reverse"
         << "\n";
    for (int i = length - 1; i >= 0; i--)
    {
        cout << str[i];
    }

    return 0;
}