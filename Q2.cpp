#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number :"
         << "\n";
    cin >> num; // 5
    int fact = 1;
    // fact = fact * 1; // 1*1=1
    // fact = fact * 2; // 1*2=2
    // fact = fact * 3; // 2*3=6
    // fact = fact * 4; // 6*4=24
    // fact = fact * 5; // 24*5=120

    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }

    cout << fact;

    return 0;
}
