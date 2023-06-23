//accept elements and find avegrage

#include<iostream>
using namespace std;

class Array
{
    public:
    int iSize;
    int *Arr;

    Array(int iNo)
    {
        iSize = iNo;
        Arr = new int[iSize];
    }
    ~Array()
    {
        delete []Arr;
    }

    void Accept()
    {
        cout<<"enter the elements"<<"\n";
        int iCnt = 0;
        for(iCnt = 0; iCnt< iSize; iCnt++)
        {
            cin>>Arr[iCnt];
        }
    }

    int Average()
    {
        int iCnt = 0, iSum= 0;
        for(iCnt = 0; iCnt< iSize; iCnt++)
        {
                iSum= iSum+Arr[iCnt];
            
        }
    return (float) iSum/ (float) iSize;
    }
};

int main()
{
    int iValue = 0;
    int iRet = 0;
    cout<<"enter number"<<"\n";
    cin>>iValue;

    Array aobj(iValue);
    aobj.Accept();
    iRet = aobj.Average();
    cout<<iRet;
    return 0;
}