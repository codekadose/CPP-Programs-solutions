// Q.8 write a program in C++ to read an integer number and find the sum of digits of integer [ Hint : input 125 output i.e. 1 + 2 + 5 = 8 ]
#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0;
    cout << "Enter a number :"
         << "\n";
    cin >> num;
    while (num > 0)
    {
        int digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }
    cout << "Sum of digits :" << sum;

    return 0;
}
