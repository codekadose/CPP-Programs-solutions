// Q.20 Write a class based C++ program to find the area of a sphere.
#include <iostream>
using namespace std;

class Area
{
private:
    float r;

public:
    void getAreaOfSphere()
    {
        cout << "Enter radius of sphere"
             << "\n";
        cin >> r;
        cout << "Are of sphere is :" << 4 * 3.14 * r * r;
    }
};
int main()
{
    Area obj;
    obj.getAreaOfSphere();
    return 0;
}