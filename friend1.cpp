#include<iostream>
using namespace std;
// Constant function is such a function which canot change the value of its caller object.

class Hello
{
    public:
       void gun();
};

class Marvellous
{
    public:
        void sun();
        void run();

};
class Demo
{
    public:
        int A;
    private:
        int B;
    protected:
        int C;

    public:
       Demo(int i, int j, int k)  //object oriented function
        {
            A=i;
            B=j;
            C=k;
        }               
    friend void fun(); //naked function 
    friend void Hello::gun(); //member function of a class 
    friend class Marvellous; // whole class
};

 void Hello::gun()  
         {
            Demo hobj(11,21,51);
            cout<<"Value of A:"<<hobj.A<<"\n";
            cout<<"Value of B:"<<hobj.B<<"\n";
            cout<<"Value of C:"<<hobj.C<<"\n";
           }
    
void Marvellous::sun()
{
        Demo obj(11,21,51);
            cout<<"Value of A:"<<obj.A<<"\n";
            cout<<"Value of B:"<<obj.B<<"\n";
            cout<<"Value of C:"<<obj.C<<"\n";
}

void Marvellous::run()
{
        Demo hobj(11,21,51);
            cout<<"Value of A:"<<hobj.A<<"\n";
            cout<<"Value of B:"<<hobj.B<<"\n";
            cout<<"Value of C:"<<hobj.C<<"\n";
}
void fun()  //naked function
{
    Demo obj(11,21,51);
    cout<<"Value of A:"<<obj.A<<"\n";
    cout<<"Value of B:"<<obj.B<<"\n";
    cout<<"Value of C:"<<obj.C<<"\n";
}


int main()
{
    fun();
    Hello hobj;
    hobj.gun();

    Marvellous mobj;
    mobj.sun();
    mobj.run();
    return 0;
}