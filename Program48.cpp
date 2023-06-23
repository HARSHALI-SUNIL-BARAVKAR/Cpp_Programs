//accept number from user and show in how many digits in number

#include<iostream>
using namespace std;

class DigitClass
{
    public:
    int iNo;
    DigitClass(int X)
    {
        iNo=X;
    }

    int CountDigit()
    {
        int iCnt = 0;
        int iDigit = 0;
        int itemp = 0;
        itemp = iNo;
        while(itemp != 0)
        {
            iDigit=itemp % 10;
            iCnt++;
            itemp= itemp / 10;
        }
        return iCnt;
    }
};

int main()
{

    int iValue = 0;
    int iRet = 0;

    cout<<"enter number"<<"\n";
    cin>>iValue;
    
    DigitClass dobj(iValue);
    iRet = dobj.CountDigit();
    
    cout<<iRet;
    return 0;
}