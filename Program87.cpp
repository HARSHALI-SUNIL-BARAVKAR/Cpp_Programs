//Accept N number from user as well as accept one another NO number
//check whether that No is present in that N numbers or not

#include<iostream>
#include<stdbool.h>
using namespace std;

class Array
{
    public:
    int iSize;
    int *Arr;
    int iNum;

    Array(int iNo1, int iNo2)
    {
        iSize = iNo1;
        Arr = new int[iSize];
        iNum = iNo2;
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

    bool ChekNum()
    {
        int iCnt = 0, iMax = Arr[0];
        for(iCnt = 0; iCnt< iSize; iCnt++)
        {
               if(Arr[iCnt] == iNum)
               {
                break;
               }
        }
               if(Arr[iCnt] == iNum)
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
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;
    cout<<"enter number"<<"\n";
    cin>>iValue1;

    cout<<"enter number you want to search "<<"\n";
        cin>>iValue2;


    Array aobj(iValue1, iValue2);
    aobj.Accept();
    bRet = aobj.ChekNum();
    
    if(bRet == true)
    {
        cout<<"Number is present ";
    }
    else
    {
        cout<<"Number is not present";
    }
    return 0;
}