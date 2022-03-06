/* Q.10 Write a C++ program to find the smallest of four given integers
 using min ( ) function to return the smallest of four given integers.
 Int min (int, int, int, int)*/
#include <iostream>
using namespace std;

int min(int, int, int, int);

int main()
{
    int small = min(100, 200, 4, 11);
    cout << "Smallest number is :" << small;
    return 0;
}

int min(int a, int b, int c, int d)
{
    int smallest;
    if (a < b)
    {
        smallest = a;
    }
    else
    {
        smallest = b;
    }
    if (c < smallest)
    {
        smallest = c;
    }
    if (d < smallest)
    {
        smallest = d;
    }
    return smallest;
}