//accept number from user and return largest digit from that number
//7228

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

    int MaxDigit()
    {
        int iDigit = 0;
        int iMax= 0;
        int itemp = 0, iCnt = 0;
        itemp = iNo;

        while(itemp != 0)
        {
            iDigit = itemp % 10;
            if(iDigit > iMax)
            {
            iMax=iDigit; 
            }
            if(iMax == 0)
            {
                break;
            }
            itemp = itemp / 10;
        }
            return iMax;
    }

};
int main()
{
    int iValue = 0;
    int  iRet = 0;
    cout<<"enter number"<<"\n";
    cin>>iValue;

    DigitClass dobj(iValue);
    iRet = dobj.MaxDigit();

    cout<<iRet;

    return 0;
}