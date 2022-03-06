/* Q.15 Write a C++ program to overload add ( ) function which will add two
 integer [add(int, int) ] and three integer [ add (int, int, int)].*/

#include <iostream>
using namespace std;

void add(int a, int b)
{
    cout << "Addtiotn of two number is :" << a + b << "\n";
}
void add(int a, int b, int c)
{
    cout << "Addtiotn of three number is :" << a + b + c;
}
int main()
{
    int a, b, c;
    cout << "Enter three numbers"
         << "\n";
    cin >> a >> b >> c;
    add(a, b);
    add(a, b, c);
    return 0;
}