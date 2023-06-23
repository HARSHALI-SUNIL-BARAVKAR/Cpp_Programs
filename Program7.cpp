// Write a program which checks whether the number is divisble by 3 and 5.

#include<iostream>
#include<stdbool.h>
using namespace std;

class Check
{
    public:
    int iNo;

    Check(int X)
    {
        iNo = X;
    }

    bool CheckDivisible()
    {
        if((iNo%5)==0)
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

    Check cobj(iValue);
    bRet = cobj.CheckDivisible();

    if(bRet == true)
    {
        cout<<"Number is Divisible by 5"<<"\n";
    }
    else
    {
        cout<<"Number is not Divisible by 5"<<"\n";
    }

    return 0;
}