//  INPUT : 7
//  OUTPUT : A  B   C   D   E   F   G   

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
        for(i = 1,ch='A'; i<= iRow; i++,ch++)
        {
            cout<<ch<<"\t";
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