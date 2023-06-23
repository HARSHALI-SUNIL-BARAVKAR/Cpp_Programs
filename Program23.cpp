//Accept number from user and find the factor of that number

#include<iostream>
using namespace std;

class DisplayClass
{
    public:
    int iNo;

    DisplayClass(int X)
    {
        iNo = X;
    }
    void Factor()
    {
        int iCnt =0;
        for(iCnt = 1; iCnt<=iNo; iCnt++)
        {
            if((iNo % iCnt)==0)
            {
                cout<<iCnt<<"\n";
            }
        }
    }
};
int main()
{
    int iValue =0;
    cout<<"Enter number"<<"\n";
    cin>>iValue;
    
    DisplayClass dobj(iValue);
    dobj.Factor();
    return 0;
}