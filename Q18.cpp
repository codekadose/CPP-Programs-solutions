// Q.18 Write a C++ program to find smallest in array of 10 floats pointer.
#include <iostream>
using namespace std;

int main()
{
    float num[10];
    float *p;
    cout << "Enter 10 floating numbers :"
         << "\n";
    for (int i = 0; i < 10; i++)
    {
        cin >> num[i];
    }
    p = &num[0];
    for (int i = 1; i < 10; i++)
    {
        if (num[i] < *p)
        {
            p = &num[i];
        }
    }
    cout << "Smallest number is :" << *p;

    return 0;
}