#include<iostream>
using namespace std;

//Abstract class : It is class which contains atleast single pure virtual function in it
class Base
{
        public: 
            int A,B;
                // 1000
            int Addition(int i, int j) // concrete function
            {
                return i+j;
            }
                //2000
            virtual int Substraction(int i, int j) // concrete function
            {
                return i-j;
            }
            virtual int Multiplication(int i, int j) = 0; // Abstract function

};

class Derived : public Base
{
        public:
            int X,Y;
                //3000
            int Substraction(int i, int j) // concrete function
            {
                int Ans = 0;
                Ans = i-j;
                return Ans;
            }
                //4000
            int Multiplication(int i , int  j) //concrete function
            {
                return i*j;
            }

};
int main()
{
 //   Base bobj; // NA bcoz it contains pure virtual function
    Base *bp = new Derived();
    int Ret = 0;
    Ret = bp->Addition(10,11);  // Base Addition
    cout<<"Addition is:"<<Ret<<"\n"; //21
    
    Ret = bp->Substraction(10,11);  //Derived Substraction
    cout<<"Substraction is:"<<Ret<<"\n"; //-1
    
    Ret = bp->Multiplication(10,11); //Derived Multiplication
    cout<<"Multiplication is:"<<Ret<<"\n"; //110
    return 0;
}