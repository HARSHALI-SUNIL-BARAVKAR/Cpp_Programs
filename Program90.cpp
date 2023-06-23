//Accept N number from user as well as accept one another NO number
//return the first occurence of that number

#include<iostream>
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

    int FirstOcc()
    {
        int iCnt = 0, iMax = Arr[0];
        for(iCnt = 0; iCnt< iSize; iCnt++)
        {
               if(Arr[iCnt] == iNum)
               {
                break;
               }
        }
        if(iCnt == iSize)
        {
            return -1;
        }
        else
        {
            return iCnt;
        }
             
    }

};

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;
    cout<<"enter number"<<"\n";
    cin>>iValue1;

    cout<<"enter number you want to search "<<"\n";
        cin>>iValue2;


    Array aobj(iValue1, iValue2);
    aobj.Accept();
    iRet = aobj.FirstOcc();
    
    cout<<iRet;
    
    return 0;
}