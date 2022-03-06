// Q.6 Write a program in C++ to read a line of text and to count number of words in a text.
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[100];
    cout << "Enter a text :"
         << "\n";
    gets(str);
    int count = 1;
    int length = strlen(str);
    for (int i = 0; i < length; i++)
    {
        if (str[i] == ' ')
        {
            count++;
        }
    }
    cout << "Number of words :" << count;

    return 0;
}
