//Accept 1 number from user and we have to calculate factorial of that number
//without using recursion

#include<iostream>
using namespace std;

class RecursionClass
{ 
    public:
        int iNo1;

        RecursionClass(int X)
        {
            iNo1=X;
        }
        int Recursion()
        {
            int iCnt = 0;
            int iSum = 0;
            for(iCnt=iNo1; iCnt>0;iCnt--)
            {
                iSum = iSum + iCnt;
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

    RecursionClass robj(iValue);
    iRet =robj.Recursion();

    cout<<iRet<<"\n";

    return 0;
}