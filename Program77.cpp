//accept elements and display even number

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

    void Display()
    {
        int iCnt = 0;
        for(iCnt = 0; iCnt< iSize; iCnt++)
        {
            if((Arr[iCnt]%2)==0)
            {
            cout<<Arr[iCnt]<<"\t";
            }
        }
    }

};

int main()
{
    int iValue = 0;
    cout<<"enter number"<<"\n";
    cin>>iValue;

    Array aobj(iValue);
    aobj.Accept();
    aobj.Display();

    return 0;
}