#include <iostream>
using namespace std;

int main()
{
    float a[5];
    cout << "Enter 5 float numbers :"
         << "\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    float largest = a[0];
    for (int i = 1; i < 5; i++)
    {
        if (largest < a[i])
        {
            largest = a[i];
        }
    }
    cout << "Largest number is :" << largest;

    return 0;
}
