#include <iostream>
using namespace std;

int main()
{
    int num[10];
    int smallest, largest;
    cout << "Enter 10 numbers :"
         << "\n";
    for (int i = 0; i < 10; i++)
    {
        cin >> num[i];
    }
    smallest = num[0];
    largest = num[0];
    for (int i = 1; i < 10; i++)
    {
        if (num[i] < smallest)
        {
            smallest = num[i];
        }
        if (num[i] > largest)
        {
            largest = num[i];
        }
    }

    cout << "Smallest number is :" << smallest << "\n";
    cout << "Largest number is :" << largest;

    return 0;
}