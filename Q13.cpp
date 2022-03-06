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
