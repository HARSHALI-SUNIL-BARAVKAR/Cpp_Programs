#include<iostream>
using namespace std;

class NumberClass
{
    public:
    int iSize;
    int *Arr;

    NumberClass(int iNo)
    {
        iSize= iNo;
        Arr = new int[iSize];
    }
    ~NumberClass()
    {
        delete []Arr;
    }
    void Accept()
    {
        cout<<"Enter the elements"<<"\n";

        int iCnt = 0;
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
           cin>>Arr[iCnt]; 
        }
    }
    int Summation()
    {
      int iSum = 0, iCnt = 0;
      for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
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

    NumberClass nobj(iValue);
    nobj.Accept();
    iRet = nobj.Summation();

    cout<<" Summation is"<<iRet<<"\n";
        return 0;
}

