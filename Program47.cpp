//accept number from user and show in digit numbering system

#include<iostream>
using namespace std;

class DigitClass
{
    public:
    int iNo;
    DigitClass(int X)
    {
        iNo=X;
    }
    void DisplayDigit()
    {
        int iDigit = 0;
        int itemp = 0; 
        itemp = iNo;
        
        while(itemp != 0)
        {
        iDigit = itemp % 10;
        cout<<iDigit<<"\n";
        itemp = itemp/10;
        }
    }

};
int main()
{
    int iValue = 0;
    cout<<"enter number : "<<"\n";
    cin>>iValue;

    DigitClass dobj(iValue);
    dobj.DisplayDigit();

    return 0;
}