//Accept number from user and we have to perform addition of 
//the number

#include<iostream>
using namespace std;

class SumClass
{
    public:
    int iNo;
    SumClass(int X)
    {
        iNo = X;
    }
    
    int SumFactors()
    {
        int iCnt = 0;
        int iSum = 0;
        for(iCnt = 1; iCnt<=iNo; iCnt++)
        {
            if((iNo%iCnt)==0)
            {
                iSum = iSum+iCnt;
            }
        }

    return iSum;
    } 

};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number"<<"\n";
    cin>>iValue;

    SumClass sobj(iValue);
    iRet = sobj.SumFactors();
    cout<<"Addition of factors is"<<iRet<<"\n";

    return 0;
}