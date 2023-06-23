//Accept number from user and check whether that number is
// prime or not

#include<iostream>
#include<stdbool.h>
using namespace std;

class PrimeClass
{
    public:
     int iNo;

    PrimeClass(int X)
    {
        iNo = X;
    }

    bool CheckPrime()
    {
        int iCnt = 0;
        bool bFlag = true;

        for(iCnt =2; iCnt<=(iNo/2); iCnt++)
        {
            if((iNo % iCnt)==0)
            {
                bFlag = false;
                break;
            }
        }
        return bFlag;
    }
};
int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter number"<<"\n";
    cin>>iValue;

    PrimeClass pobj(iValue);
    bRet = pobj.CheckPrime();

    if(bRet == true)
    {
        cout<<"Number is prime"<<"\n";
    }
    else
    {
        cout<<"Number is not prime"<<"\n";
    }
    return 0;
}