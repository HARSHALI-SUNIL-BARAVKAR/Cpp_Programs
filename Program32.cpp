//Accept 2 numbers from user as x and y and output should be x^y

#include<iostream>
using namespace std;

class CalculatePower
{
    public:
    int iBase;
    int iPower;

    CalculatePower(int X, int Y)
    {
        iBase = X;
        iPower = Y;        
    }

    int Power()
    {
        int iResult = 1;
        int iCnt = 0;
        for(iCnt =1; iCnt<=iPower; iCnt++)
        {
            iResult = iResult * iBase;
        }
        return iResult;
    }

};

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    cout<<"Enter Base"<<"\n";
    cin>>iValue1;

    cout<<"Enter Power"<<"\n";
    cin>>iValue2;

    CalculatePower cobj(iValue1,iValue2);
    iRet = cobj.Power();

    cout<<"Result is"<<iRet<<"\n";
        return 0;
}