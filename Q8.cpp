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
