// Q2. Write a C++ program to find factorial of natural number input during program execution.
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number :"
         << "\n";
    cin >> num;
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }

    cout << fact;

    return 0;
}
