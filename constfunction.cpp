#include<iostream>
using namespace std;
// Constant function is such a function which canot change the value of its caller object.
class Demo
{
    public:
        int A;
        int B;
        const int C;
        const int D;

        Demo() : C(11) , D(21)  // member initialisation lists
        {
            A = 0;
            B = 0;
        }

        Demo(int i, int j, int k, int l): C(k), D(l)
        {
            A=i;
            B=j;
        }

        void fun()
        {
         cout<<"inside fun"<<"\n";
           // A++;     //A
            //B++;     //A
            
        //    C++;     //NA
        //    D++;     //NA
        }

        void gun() const
        {
             cout<<"inside gun"<<"\n";
         // A++;     //NA
         // B++;     //NA
         //C++;     //NA
         //D++;     //NA

        }
};
int main()
{
    Demo obj1(11,21,51,101);
    const Demo obj2(11,21,51,101);

    obj1.fun();
    obj1.gun();

    //obj2.fun();
    obj2.gun();

    cout<<obj1.A<<"\n";
    cout<<obj1.B<<"\n";
    cout<<obj1.C<<"\n";
    cout<<obj1.D<<"\n";

     cout<<obj2.A<<"\n";
    cout<<obj2.B<<"\n";
    cout<<obj2.C<<"\n";
    cout<<obj2.D<<"\n";

    return 0;
}