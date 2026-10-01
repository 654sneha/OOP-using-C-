//Write C++ Code to initilize employ id,name,salary and department for a employ in company(1-default,1-Parametized)
#include<iostream>
using namespace std;

class employ
{
    int id;
    string depart;
    string name;
    int salary;
    public:
        employ(int x,string y,string z,int s) //Parametized function call
        {
          id=x;
          name=y;
          depart=z;
          salary=s;
        }
        employ()    //Default Function call
        {
          cin>>id;
          cin>>name;
          cin>>depart;
          cin>>salary;
        }
        void Display()
        {
            cout<<"ID= "<<id<<endl;
            cout<<"Name= "<<name<<endl;
            cout<<"Department= "<<depart<<endl;
            cout<<"Salary= "<<salary<<endl;
        }
};
int main()
{
employ c1(1,"Sneha","ECE",10000);
c1.Display();
employ c2;
c2.Display();
}
