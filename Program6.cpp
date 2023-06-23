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

    bool CheckEven()
    {
        if((iNo%2)==0)
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
    bRet = cobj.CheckEven();

    if(bRet == true)
    {
        cout<<"Number is even"<<"\n";
    }
    else
    {
        cout<<"Number is odd"<<"\n";
    }

    return 0;
}