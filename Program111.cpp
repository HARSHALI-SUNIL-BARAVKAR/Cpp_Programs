//  INPUT : 5
//  OUTPUT : -5   -4   -3   -2   -1 0   1   2   3   4   5 

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
        for(i = -iNo; i<= 0; i++)
        {
            cout<<i<<"\t";
        }
        for(i = 1; i<=iNo; i++)
        {
            cout<<i<<"\t";
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