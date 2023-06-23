//accept number from user and return reverse of that number

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
        int iReverse = 0;
        int itemp = 0;
        itemp = iNo;

        while(itemp != 0)
        {
            iDigit = itemp % 10;
            iReverse = (iReverse * 10)+iDigit;   
            itemp = itemp / 10;
        }
return iReverse;
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