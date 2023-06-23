//  INPUT : 7
//  OUTPUT : 0  1   2   3   4   5   6   7

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
        for(i = 1; i<= iRow; i++ )
        {
            cout<<i-1<<"\t";
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