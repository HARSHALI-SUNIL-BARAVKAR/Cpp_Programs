#include<iostream>
using namespace std;

class Demo
{
    public:
        int A, B;         // non static characteristics
        static int X, Y; // static characteristics

    Demo()  // default constructor
    {
        //intitialisation of non static characteristics
        A = 0;
        B = 0;

    };    
};
 //intitialisation of non static characteristics
int Demo:: X = 10;
int Demo ::Y = 20;

int main()
{
    cout<<"value of X :"<<Demo::X<<"\n";
    cout<<"value of Y :"<<Demo::Y<<"\n";

    Demo obj1;
    Demo obj2;

    cout<<"value of A from obj1"<<obj1.A<<"\n";
    cout<<"value of A from obj2"<<obj2.A<<"\n";
 
    obj1.A++;

    cout<<"value of A from obj2"<<obj2.A<<"\n";
    cout<<"value of A from obj2"<<obj2.A<<"\n";
 
    cout<<"value of X from obj1"<<obj1.X<<"\n";
    cout<<"value of X from obj2"<<obj2.X<<"\n";
 
    
    cout<<"size of demo class object is :"<<sizeof(obj1)<<"\n";
    return 0 ;
}