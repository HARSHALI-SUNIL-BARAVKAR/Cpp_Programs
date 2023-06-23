#include<iostream>
using namespace std;

class Add
{
    public:
    int iNo1;
    int iNo2;
    
    Add(int X, int Y)
    {
        iNo1 = X;
        iNo2 = Y;
    }

    int Addition()
    {
        return iNo1 +iNo2;
    }
};

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    cout<<"Enter first number :"<<" \n";
    cin>>iValue1;

    cout<<"Enter second number :"<<" \n";
    cin>>iValue2;
    
    Add aobj(iValue1,iValue2);
    
    iRet = aobj.Addition();
    cout<<"Addition is "<<iRet<<"\n";

    return 0;
}