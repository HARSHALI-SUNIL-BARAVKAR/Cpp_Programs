//  INPUT : 5
//  OUTPUT : 1  2   3   4   5   5   4   3   2   1 

#include<iostream>
using namespace std;
class PatternClass
{
    public:
    int iRow;
    
    PatternClass(int X)
    {
        iRow = X;
        }

    void Display()
    {
        int i = 0; 
        for(i = 1; i<= iRow; i++)
        {
            cout<<i<<"\t";
        }
        for(i = iRow; i>=1; i--)
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