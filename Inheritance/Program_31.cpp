//write cpp code to implement multilevel inheritance
#include<iostream>
using namespace std;

class car
{
    public:
        void display1()
        {
            cout << "\ncar class";
        }
};

class engine : public car
{
    public:
        void display2()
        {
            cout << "\nEngine class";
        }
};

class petrol : public car
{
    public:
        void display3()
        {
            cout << "\nPetrol class";
        }
};

int main()
{
    car p;
    engine s;
    petrol i;

    p.display1();

    s.display2();
    s.display1();

    i.display3();
    //i.display2();
    i.display1();

    return 0;
}
