//write cpp code to take input hour,minute and sec and display
#include<iostream>
using namespace std;

class Time{
    private:
        int hour;
        int minute;
        int second;
    public:
        void set_values(int,int,int);
        void Displaytime();
        void addtime(Time,Time);
};
void Time::set_values(int x,int y,int z)
{
    hour=x;
    minute=y;
    second=z;
}
void Time::Displaytime()
{
   cout<<"Hour= "<<hour<<endl;
   cout<<"Minute= "<<minute<<endl;
   cout<<"Second= "<<second<<endl;
}
void Time::addtime(Time x,Time y)
{
   hour=x.hour+y.hour;
   minute=x.minute+y.minute;
   second=x.second+y.second;
}
int main()
{
Time R1,R2,R3;
int x,y,z,a,b,c;
cout<<"Enter hour: ";
cin>>x;
cout<<"Enter minute: ";
cin>>y;
cout<<"Enter second: ";
cin>>z;
R1.set_values(x,y,z);
R1.Displaytime();
cout<<"Enter hour: ";
cin>>a;
cout<<"Enter minute: ";
cin>>b;
cout<<"Enter second: ";
cin>>c;
R2.set_values(a,b,c);
R2.Displaytime();
R3.addtime(R1,R2);
R3.Displaytime();
//o2.setdata();
//o2.displaydata();
return 0;
}
