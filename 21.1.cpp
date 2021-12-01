// #include <iostream>
// #include <vector>
// using namespace std;

// class students
// {
//     string name;

// public:
//     int age;
//     bool gender;

//     void setname(string s)
//     {
//         name=s;
//     }
//     void display()
//     {
//         cout << "name= ";
//         cout << name << endl;
//         cout << "age= " << age << endl;
//         cout << "gender= " << gender << endl;
//     }
// };

// int main()
// {
//     students arr[3];
//     for (int i = 0; i < 3; i++)
//     {
//         string s;
//         cin>>s;
//         arr[i].setname(s);
//         cin >> arr[i].age;
//         cin >> arr[i].gender;
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         arr[i].display();
//     }

//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

class students
{
    string name;

public:
    int age;
    bool gender;
    ~students()
    {
        cout<<"destructor has been called"<<endl;
    }

    void setname(string s)
    {
        name = s;
    }
    void getname()
    {
        // cout << "name= ";
        cout << name << endl;
    }
    void display()
    {

        cout << "age= " << age << endl;
        cout << "gender= " << gender << endl;
    }
    
};

int main()
{
    students shubhi;
    string shubhii;
    shubhi.setname("shubhii");
    shubhi.getname();
    shubhi.age = 19;
    shubhi.display();

    return 0;
}