#include<iostream>
using namespace std;

class Demo
{
    public:
        void Fun() // 1000 from text section
        {
            cout<<"Inside Fun"<<"\n"; 
        }
            void Gun() // 2000 from text section
        {
            cout<<"Inside Gun"<<"\n";
        }

};

int main()
{   
    Demo obj;
    cout<<"size of obj\n"<<sizeof(obj)<<"\n";
    obj.Fun(); // call 1000
    obj.Gun(); // call 2000

    return 0;
}