//Create Class Distance having data feet and inch.Create parametized constructor to initilize members feet and inch
#include<iostream>
using namespace std;
class Distance
{
    int  feet;
    float inch;
    public:
        Distance(int x,int y) //Parametized function call
        {
          feet=x;
          inch=y;
        }
        void Display()
        {
            cout<<"Feet= "<<feet<<endl;
            cout<<"Inch= "<<inch<<endl;
        }
};
int main()
{
Distance c1(1,10.5),c2(5,11.5);
c1.Display();
c2.Display();
}
