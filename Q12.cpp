#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[100];
    cout << "Enter a string"
         << "\n";

    gets(str);
    int len = strlen(str);
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == 'j')
        {
            count++;
        }
    }
    cout << "Count of j:" << count;

    return 0;
}
