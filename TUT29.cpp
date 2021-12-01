#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    complex(void) //default constructor
    {
        a = 0;
        b = 0;
    }
    complex(int x,int y)//parameterised constructor
    {
        a = x;
        b = y;
    }
    void printinfo()
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    complex c;
    c.printinfo();
    complex b(4,6); //implicit call
    b.printinfo();
    // explicit call
    complex e= complex(9,7);
    e.printinfo();
    return 0;
}