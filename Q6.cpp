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
