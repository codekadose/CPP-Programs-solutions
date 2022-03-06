/*Q.13 Write an object oriented program in C++ to read an integer number and
find sum of digits of integer [ Hint : input 125 output 8 i.e. 1+2+5 = 8]*/
#include <iostream>
using namespace std;

class sum
{
private:
    int num, sum = 0;

public:
    void sumOfDigits()
    {
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
    }
};

int main()
{
    sum obj;
    obj.sumOfDigits();
    return 0;
}
