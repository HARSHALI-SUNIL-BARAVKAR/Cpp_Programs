/*
INPUT:
ROW:4
COL:4

OUTPUT:
*   *   *   *
*   *   *
*   *
*

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
        int i = 0, j = 0;

        for(i = iRow; i>= 1; i--)
        {
            for(j = 1; j<=i; j++)
            {
                cout<<"*"<<"\t";
            }
            cout<<"\n";
        }        
    }

};

#include<iostream>
using namespace std;

int main()
{
    int iValue1 = 0, iValue2 = 0;
    cout<<"Enter Number of rows"<<"\n";
    cin>>iValue1;

    cout<<"Enter Number of columns"<<"\n";
    cin>>iValue2;

    PatternClass pobj(iValue1,iValue2);
    pobj.Display();

    return 0;
}