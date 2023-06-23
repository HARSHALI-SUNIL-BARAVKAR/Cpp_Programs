//accept number from user and check whether that number is 
//perfect or not

#include<iostream>
#include<stdbool.h>

using namespace std;
class DisplayClass
{
    public:
    int iNo;
    DisplayClass(int X)
    {
        iNo = X;
    }

    bool CheckPerfect()
    {
        int iCnt = 0;
        int iSum = 0;
        for(iCnt=1; iCnt<=(iNo/2); iCnt++)
        {
            if((iNo % iCnt )==0)
            {
                iSum = iSum + iCnt;
            }
        }
    
        if(iSum == iNo)
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

    DisplayClass dobj(iValue);
    bRet = dobj.CheckPerfect();
    if(bRet == true)
    {
        cout<<"Number is perfect"<<"\n";
    }
    else
    {
        cout<<"Number is not perfect"<<"\n";
    }

    return 0;
}