//write cpp code to take input real and imaginary and add display result
#include<iostream>
using namespace std;

class Complex{
    private:
        int real;
        int image;
    public:
        void set_values(int,int);
        void Displaytime();
        void addtime(Complex,Complex);
};
void Complex::set_values(int x,int y)
{
    real=x;
    image=y;
}
void Complex::Displaytime()
{
   cout<<"real= "<<real;
   cout<<"  Imaginary= "<<image<<endl;
}
void Complex::addtime(Complex x,Complex y)
{
   real=x.real+y.real;
   image=x.image+y.image;
}
int main()
{
Complex R1,R2,R3;
int x,y,a,b;
cout<<"Enter real: ";
cin>>x;
cout<<"Enter image: ";
cin>>y;
R1.set_values(x,y);
R1.Displaytime();
cout<<"Enter real: ";
cin>>a;
cout<<"Enter image: ";
cin>>b;
R2.set_values(a,b);
R2.Displaytime();
R3.addtime(R1,R2);
cout<<"ANSWER: ";
R3.Displaytime();
//o2.setdata();
//o2.displaydata();
return 0;
}
