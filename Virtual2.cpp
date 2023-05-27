#include<iostream>
using namespace std;

class Base
{
    public:
        int A,B;
        virtual void Fun()  //1000
        {
            cout<<"Inside Fun of base"<<"\n";
        }

        virtual void Gun() //2000
        {
            cout<<"Inside Gun of base"<<"\n";
        }

        virtual void Sun() //3000
        {
            cout<<"Inside Sun of base"<<"\n";
        }
};

class Derived : public Base
{
    public:
        int X,Y;
         void Fun()  //4000
        {
            cout<<"Inside Fun of derived"<<"\n";
        }

        virtual void Sun() //5000
        {
            cout<<"Inside Sun of derived"<<"\n";
        }

        virtual void Run() //6000
        {
            cout<<"Inside Run of derived"<<"\n";
        }
};

int main()
{
    cout<<"size of base "<< sizeof(Base)<<"\n";
    cout<<"size of derived "<< sizeof(Derived)<<"\n";
    Base *bp = new Derived; // Up casting [allowed]
    bp->Fun(); // Derived Fun
    bp->Gun(); // Base Gun
    bp->Sun(); // Derived Sun
   // bp->Run(); // Error
return 0;
}
