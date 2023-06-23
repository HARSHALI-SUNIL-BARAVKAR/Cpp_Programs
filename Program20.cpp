//Display 1 to 5 on screen

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

    void Display()
    {
        if(iNo<0)
        {
            iNo = -iNo;
        }
        int iCnt = 0;
        for(iCnt = 1; iCnt<=iNo; iCnt++)
        {
            cout<<iCnt<<"\n";
        }

    }

};
int main()
{
    int iValue = 0;
    cout<<"Enter number"<<"\n";
    cin>>iValue;
    DisplayClass dobj(iValue);
    dobj.Display();

    return 0;
}