// Q.9 write in C++ that inputs and stores 10 numbers in an array and prints the sum and average of the array elements
#include <iostream>
using namespace std;

int main()
{
    int a[10], sum = 0;
    cout << "Enter 10 numbers :"
         << "\n";

    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 10; i++)
    {
        sum = sum + a[i];
    }
    cout << "Sum is :" << sum << "\n";
    cout << "Avg is :" << sum / 10 << "\n";

    return 0;
}
