//accept one number and one digit from  user and check
// whether that digit is present in that number or not

#include<iostream>
#include<stdbool.h>
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

    bool checkDigit()
    {
        int iDigit = 0;
        int itemp = 0, iCnt =0;
        itemp = iNo1;

        while(itemp != 0)
        {
            iDigit = itemp % 10;
            if(iDigit == iNo2)
            {
                break;
            }
        itemp = itemp / 10;
        }
        if(iDigit== iNo2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

};
int main()
{
    int iValue1 = 0 , iValue2 = 0;
    bool bRet = false;
    cout<<"enter number"<<"\n";
    cin>>iValue1;

    cout<<"enter digit"<<"\n";
    cin>>iValue2;

    DigitClass dobj(iValue1,iValue2);
    bRet = dobj.checkDigit();

    if(bRet == true)
    {
    cout<<"Digit is present"<<"\n";
    }
    else
    {
        cout<<"Digit is not present"<<"\n";
    }
    return 0;
}