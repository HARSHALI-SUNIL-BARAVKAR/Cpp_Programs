//accept number from user and return the average

#include<iostream>
using namespace std;

class DigitClass
{
    public:
    int iNo;

    DigitClass(int X)
    {
        iNo = X;
    }

    int Average()
    {
        int iDigit = 0;
        int iSum= 0;
        int itemp = 0, iCnt = 0;
        itemp = iNo;

        while(itemp != 0)
        {
            iDigit = itemp % 10;
            iSum= iSum + iDigit; 
            iCnt++;  
            itemp = itemp / 10;
        }
            return (float)((float)iSum / (float)iCnt);
    }

};
int main()
{
    int iValue = 0;
    int  iRet = 0;
    cout<<"enter number"<<"\n";
    cin>>iValue;

    DigitClass dobj(iValue);
    iRet = dobj.Average();

    cout<<iRet;

    return 0;
}