//Create a class rectangle having data members lenght and width.Demonstrate default,parametized and copy constructor to initilize members
#include<iostream>
using namespace std;

class Rectangle
{
    int width;
    int height;
    public:
        Rectangle(int x,int y) //Parametized Constructor function call
        {
          width=x;
          height=y;
        }
        Rectangle()    //Default Constructor Function call
        {
          cin>>width;
          cin>>height;
        }
        Rectangle(Rectangle &x)    //copy Constructor Function call
        {
          width=x.width;
          height=x.height;
        }
        void Display()
        {
            cout<<"Width= "<<width<<endl;
            cout<<"Height= "<<height<<endl;
        }
};
int main()
{
Rectangle c1(10,20);
c1.Display();
Rectangle c2;
c2.Display();
Rectangle c3(c2);
c3.Display();
}

