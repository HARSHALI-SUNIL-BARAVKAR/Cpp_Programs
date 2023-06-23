//  INPUT : 7
//  OUTPUT : 2   4   6   8  10  12  14 


#include<iostream>
using namespace std;
class PatternClass
{
    public:
    int iNo;
    
    PatternClass(int X)
    {
        iNo = X;
        }

    void Display()
    {
        int i = 0;

        for(i = 1; i<= iNo; i++)
        {
                cout<<i*2<<"\n";
           
        }
    }
};

int main()
{
    int iValue = 0;
    cout<<"Enter number of rows"<<"\n";
    cin>>iValue;

    PatternClass pobj(iValue);
    pobj.Display();
    
   
    return 0;
}