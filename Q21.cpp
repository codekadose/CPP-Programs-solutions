#include <iostream>
using namespace std;

void getGCD(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        if (b > a)
        {
            b = b - a;
        }
    }
    cout << "GCD is " << a;
}

int main()
{
    int a, b;
    cout << "Enter two numbers :"
         << "\n";
    cin >> a >> b;
    getGCD(a, b);
    return 0;
}
