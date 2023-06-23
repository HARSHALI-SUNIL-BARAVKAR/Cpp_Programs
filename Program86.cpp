//Accept N numers from the user and we have to find the 
//smallest and largest number from that number

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

    int MaxiMin()
    {
        int iCnt = 0, iMax = Arr[0], iMin = Arr[0];
        for(iCnt = 0; iCnt< iSize; iCnt++)
        {
               if(Arr[iCnt]>iMax)
               {
                iMax = Arr[iCnt];
               }
                 if(Arr[iCnt]<iMin)
               {
                iMin = Arr[iCnt];
               }
        }
        cout<<"largest number is : "<<iMax;
    cout<<"smallest number is : "<<iMin;
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
    aobj.MaxiMin();
    return 0;
}