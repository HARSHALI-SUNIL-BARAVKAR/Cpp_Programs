#include<iostream>
using namespace std;

class Base
{
    public:
        int A,B;
        void Fun()  //1000
        {
            cout<<"Inside Fun of base"<<"\n";
        }

        void Gun() //2000
        {
            cout<<"Inside Gun of base"<<"\n";
        }

        void Sun() //3000
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

        void Gun() //5000
        {
            cout<<"Inside Gun of derived"<<"\n";
        }

        void Sun() //6000
        {
            cout<<"Inside Sun of derived"<<"\n";
        }
};

int main()
{
    Base *bp = new Base;  //No casting
    Derived *dp = new Derived; // No casting

    Base *bp1 = new Derived; // Up casting [allowed]
    //Derived *dp1 = new Base; // Down casting [no allowed]

   /* Derived dobj:

    dobj.Fun();
    dobj.Gun();
    dobj.Sun();
    */
return 0;
}
