//  INPUT : 7
//  OUTPUT : a  1   b   2   c   3   d   4   e   5   f   6   g   7   

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
        char ch='\0'; 
        for(i = 1,ch='a'; i<= iRow; i++,ch++)
        {
            cout<<ch<<"\t"<<i<<"\t";
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