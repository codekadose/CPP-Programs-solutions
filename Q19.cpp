#include <iostream>
using namespace std;

class Area
{
private:
    int b, h;

public:
    void getAreaOfTriangle()
    {
        cout << "Enter base and heihght:"
             << "\n";
        cin >> b >> h;
        cout << "Are of triangle is :" << 0.5 * b * h;
    }
};
int main()
{
    Area obj;
    obj.getAreaOfTriangle();
    return 0;
}