//accept number from user Check whether the digit 8 is yes or not

#include<iostream>
#include<stdbool.h>
using namespace std;

class DigitClass
{
    public:
    int iNo;
    DigitClass(int X)
    {
        iNo = X;
    }

    bool CheckDigit()
    {
        int iDigit =0;
        int itemp = 0;
        itemp = iNo;

        while(itemp != 0)
        {
            iDigit = itemp % 10;
            if(iDigit == 8)
            {
                break;
            }
            itemp = itemp/10;
        }
        if(iDigit == 8)
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
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter number"<<"\n";
    cin>>iValue;

    DigitClass dobj(iValue);
    bRet = dobj.CheckDigit();

    if(bRet == true)
    {
        cout<<"digit is present"<<"\n";
    }
    else
    {
        cout<<"digit is not present"<<"\n";
    }

    return 0;
}
