// Q.7 Write a C++ program to accept a number and test whether it is prime or not.
#include <iostream>
using namespace std;

int main()
{
    int num;
    bool isPrime = true;
    cout << "Enter a number :"
         << "\n";
    cin >> num;                          // 7
    for (int i = 2; i <= (num / 2); i++) // 2 ,3
    {
        if (num % i == 0)
        {
            isPrime = false;
        }
    }

    if (isPrime)
    {
        cout << "Entered number is prime.";
    }
    else
    {

        cout << "Entered number is not a prime.";
    }
    return 0;
}
