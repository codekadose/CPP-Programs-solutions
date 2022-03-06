#include <iostream>
using namespace std;

class fibonacci
{
private:
    int f1 = 0, f2 = 1;

public:
    void getFibonacci()
    {
        cout << f1 << "\n";
        cout << f2 << "\n";
        int next;

        for (int i = 3; i <= 20; i++)
        {
            next = f1 + f2;
            cout << next << "\n";
            f1 = f2;
            f2 = next;
        }
    }
};

int main()
{
    fibonacci obj;
    obj.getFibonacci();
    return 0;
}
