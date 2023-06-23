/*
INPUT:
ROW:3
COL:5

OUTPUT:
     a   a   a   a   a
     b   b   b   b   b
     c   c   c   c   c
     */

#include<iostream>
using namespace std;
class PatternClass
{
    public:
    int iRow;
    int iCol;
    
    PatternClass(int X, int Y)
    {
        iRow = X;
        iCol = Y;
    }

    void Display()
    {
        int i = 0, j =0; 
        char ch ='\0';
        for(i = 1,ch='a'; i<= iRow; i++,ch++)
        {
            for(j = 1; j <=iCol; j++)
            {
            cout<<ch<<"\t";
            }
            cout<<"\n";
        }
        
    }
};

int main()
{
    int iValue1 = 0, iValue2 = 0;
    cout<<"Enter number of rows"<<"\n";
    cin>>iValue1;

    cout<<"Enter number of col"<<"\n";
    cin>>iValue2;

    PatternClass pobj(iValue1,iValue2);
    pobj.Display();
    
   
    return 0;
}