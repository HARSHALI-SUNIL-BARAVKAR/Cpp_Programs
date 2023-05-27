#include<iostream>
using namespace std;
//parent class
class Demo
{
    public:
        int A,B;

        Demo()
        {
            A=11;
            B=21;
            cout<<"Inside Demo consturctor"<<"\n";
        }

        void fun()
        {
            cout<<"Inside fun of Demo"<<"\n";
        }

        ~Demo()
        {
            cout<<"Inside Demo Destructor"<<"\n";
        }
};
// child class
class Hello : public Demo  // class Hello extends Demo (in Java )
{
    public:
    int X,Y;

    Hello()
    {
        X=51;
        Y=101;
        cout<<"Inside Hello constructor"<<"\n";
    }

    void gun()
    {
        cout<<"Inside gun of Hello"<<"\n";
    }

    ~Hello()
    {
        cout<<"Inside Hello Destructor"<<"\n";
    }
};

int main()
{
    Hello hobj;

    hobj.fun();
    hobj.gun();

    cout<<hobj.A<<"\n";
    cout<<hobj.B<<"\n";
    cout<<hobj.X<<"\n";
    cout<<hobj.Y<<"\n";    
    return 0;
}