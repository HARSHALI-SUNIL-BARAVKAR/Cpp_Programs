//accept number from user and return smallest digit from that number
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

    int MinDigit()
    {
        int iDigit = 0;
        int iMin= 9;
        int itemp = 0, iCnt = 0;
        itemp = iNo;

        while(itemp != 0)
        {
            iDigit = itemp % 10;
            if(iDigit < iMin)
            {
            iMin=iDigit; 
            }
            if(iMin == 0)
            {
                break;
            }
            itemp = itemp / 10;
        }
            return iMin;
    }

};
int main()
{
    int iValue = 0;
    int  iRet = 0;
    cout<<"enter number"<<"\n";
    cin>>iValue;

    DigitClass dobj(iValue);
    iRet = dobj.MinDigit();

    cout<<iRet;

    return 0;
}