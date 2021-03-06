/*Q.11 write C++ program to print the input string in a reverse order using
 function , which first locates the end of string. Then it swaps the first
 character with the last character, the second character with the second last
  character and so on.
*/
#include <iostream>
#include <cstring>
using namespace std;

void rverseString(char str[])
{
    int len = strlen(str);
    int mid = len / 2;
    for (int i = 0; i <= mid; i++)
    {
        char temp = str[i];
        str[i] = str[len - 1];
        str[len - 1] = temp;
        len--;
    }
    cout << "Reverse string is:" << str;
}

int main()
{
    char str[100];
    cout << "Enter a string"
         << "\n";
    gets(str);
    rverseString(str);
    return 0;
}
