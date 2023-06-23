//accept the number from user and count the frequency of odd 
//digits

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

    int CountFreq()
    {
        int iDigit = 0;
        int itemp = 0, iCnt =0;
        itemp = iNo;

        while(itemp != 0)
        {
            iDigit = itemp % 10;
            if((iDigit%2) !=0)
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
    int iValue = 0, iRet = 0;
    cout<<"enter number"<<"\n";
    cin>>iValue;

   
    DigitClass dobj(iValue);
    iRet = dobj.CountFreq();

    cout<<iRet;

    return 0;
}