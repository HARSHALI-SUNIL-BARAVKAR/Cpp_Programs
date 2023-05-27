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

    }

    void fun() // void fun(Demo *this)
    {
        cout<<"Inside non static function fun"<<"\n";
        cout<<"value of A :"<<this->A<<"\n";
        cout<<"value of B :"<<this->B<<"\n";
        cout<<"value of X :"<<X<<"\n";
        cout<<"value of Y :"<<Y<<"\n";
    } 
    
    static void gun() // static void gun()
    {
        cout<<"Inside static function gun"<<"\n";
        cout<<"value of X :"<<X<<"\n";
        cout<<"value of Y :"<<Y<<"\n";
    }    
};

 //Intitialisation of non static characteristics
int Demo:: X = 10;
int Demo ::Y = 20;

int main()
{
    Demo::gun();
    Demo obj;

    obj.fun(); // fun(&obj);
    obj.gun(); // Avoid to call static 

   
    return 0 ;
}