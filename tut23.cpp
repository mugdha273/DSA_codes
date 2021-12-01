// #include <iostream>
// using namespace std;
// class dukaan
// {

//        int itemId[100];
//        int itemPrice[100];
//        int counter;

// public:
//        void initCounter(void) { counter = 0; }
//        void getdata();
//        void printdata();
// };
// void dukaan ::getdata()
// {
//        cout << "Enter your itemId " << endl;
//        cin >> itemId[counter];
//        cout << "Enter Price of your item" << endl;
//        cin >> itemPrice[counter];
//        counter++;
// }

// void dukaan ::printdata()
// {

//        for (int i = 0; i < counter; i++)
//        {
//               cout << "your itemId is " << itemId[i] << endl;
//               cout << "your itemprice is " << itemPrice[i] << endl;
//        }
// }

// int main()
// {
//        dukaan dukan;
//        dukan.initCounter();
//        dukan.getdata();
//        dukan.getdata();
//        dukan.getdata();
//        dukan.printdata();
//        return 0;
// }
#include <iostream>
using namespace std;
class complex
{
       int a;
       int b;

public:
       void declare(int v1, int v2)
       {
              a=v1;
              b=v2;
       }
       void solve(complex o1, complex o2)
       {
              a = o1.a + o2.a;
              b = o1.b + o2.b;
       }
       void printNumber()
       {
              cout << "Your complex number is " << a << " + " << b << "i" << endl;
       }
};

int main()
{
       complex c1, c2, c3;
       c1.declare(1, 3);
       c1.printNumber();
       c2.declare(4, 5);
       c2.printNumber();
       c3.solve(c1, c2);
       c3.printNumber();
       return 0;
}