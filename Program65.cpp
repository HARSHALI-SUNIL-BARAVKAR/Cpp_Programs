//accept number from user and check whether that 
//number is pallindrome or not

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

    bool CheckPallindrome()
    {
        int iDigit = 0;
        int iReverse = 0;
        int itemp = 0, itemp1 =iNo;
        itemp = iNo;

        while(itemp != 0)
        {
            iDigit = itemp % 10;
            iReverse = (iReverse * 10)+iDigit;   
            itemp = itemp / 10;
        }
        if(iReverse == itemp1)
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
    bool  bRet = false;
    cout<<"enter number"<<"\n";
    cin>>iValue;

    DigitClass dobj(iValue);
    bRet = dobj.CheckPallindrome();

    if(bRet == true)
    {
        cout<<"Number is pallindrome"<<"\n";
    }
    else
    {
        cout<<"Number is not pallindrome"<<"\n";
    }
    return 0;
}