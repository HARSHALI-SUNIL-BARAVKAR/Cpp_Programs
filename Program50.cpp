//accept number from user and add the digits

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

    int AddDigit()
    {
        int iSum = 0;
        int iDigit = 0;
        int itemp = 0;
        itemp = iNo;

        while(itemp != 0)
        {
            iDigit = itemp % 10;
            iSum = iSum + iDigit;
            itemp = itemp / 10;
        }
        return iSum;
    }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"enter number"<<"\n";
    cin>>iValue;

    DigitClass dobj(iValue);
    iRet = dobj.AddDigit();

    cout<<iRet;
    return 0;
}