/*
INPUT:
ROW:5
COL:5

OUTPUT:
*   *   *   *   *
*   &   &   &   *
*   &   &   &   *
*   &   &   &   *
*   *   *   *   *
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
        for(i = 1; i<= iRow; i++)
        {
            for(j = 1; j <=iCol; j++)
            {
               if((i==1) ||(i==iRow)||(j==1)||(j==iCol))
               {
                cout<<"*"<<"\t";
               }
               else
               {
                cout<<"&"<<"\t";
               }
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
