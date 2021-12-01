#include <iostream>
#include <cmath>
using namespace std;
class point
{

public:
    int a;
    int b;
    point(void) //default constructor
    {
        a = 0;
        b = 0;
    }
    point(int x, int y) //parameterised constructor
    {
        a = x;
        b = y;
    }
    void printinfo()
    {
        cout << "Your point  is (" << a << "," << b << ")" << endl;
    }
    void distanc(point p1, point p2);
};
void distanc(point p1, point p2)
{
    double x1 = (p2.a - p1.a) * (p2.a - p1.a);
    double x2 = (p2.b - p1.b) * (p2.b - p1.b);
    double d = x1 + x2;

    cout << sqrt(d)<<endl;
}

int main()
{
    point p1(1, 2), p2(4, 3);
    p1.printinfo();
    p2.printinfo();
    distanc(p1, p2);
    return 0;
}