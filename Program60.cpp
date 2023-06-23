//accept one number and one digit from  user and
//find the frequency of  that digit 

#include<iostream>
using namespace std;

class DigitClass
{
    public:
    int iNo1;
    int iNo2;
    DigitClass(int X, int Y)
    {
        iNo1 = X;
        iNo2 = Y;
    }

    int CountFreq()
    {
        int iDigit = 0;
        int itemp = 0, iCnt =0;
        itemp = iNo1;

        while(itemp != 0)
        {
            iDigit = itemp % 10;
            if(iDigit == iNo2)
            {
                iCnt++;
            }
        itemp = itemp / 10;
        }
return iCnt;
    }

};
int main()
{
    int iValue1 = 0, iValue2 = 0 , iRet = 0;
    cout<<"enter number"<<"\n";
    cin>>iValue1;

    cout<<"enter Digit"<<"\n";
    cin>>iValue2;

    DigitClass dobj(iValue1,iValue2);
    iRet = dobj.CountFreq();

    cout<<iRet;

    return 0;
}