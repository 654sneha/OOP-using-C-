/write a cpp program to take mileage as input and display
#include<iostream>
using namespace std;

class Test{
    private:
        int mark;
        int spi;
    public:
        void setdata()
        {
            mark=270;
            spi=6.5;
        }
        void displaydata()
        {
            cout<<"mark="<<mark<<endl;
            cout<<"spi="<<spi;
        }
};

int main()
{
Test o1;
o1.setdata();
o1.displaydata();
return 0;
}
