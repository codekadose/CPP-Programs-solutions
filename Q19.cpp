// Q.19 Write a class based program in C++ to find area of a triangle.
#include <iostream>
using namespace std;

class Area
{
private:
    float b, h;

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