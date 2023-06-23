//  INPUT : 7
//  OUTPUT : a  b   c   d   e   f   g

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
        char ch='A'; 
        for(i = 1; i<= iRow; i++)
        {
            cout<<ch<<"\t";
            ch++;
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