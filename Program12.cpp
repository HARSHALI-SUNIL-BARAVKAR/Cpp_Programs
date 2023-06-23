#include<iostream>
using namespace std;

class DisplayClass
{
    public:
    int iNo;
    DisplayClass(int X)
    {
        iNo=X;
    }

    void Display()
    {
        if(iNo<0)
        {
            cout<<"Enter positive number"<<"\n";
        }
       
        int iCnt=0;
        for(iCnt=0; iCnt<iNo; iCnt++)
        {
            cout<<"jay Ganesh"<<"\n";
        }
    }
};
int main()
{
    int iValue = 0;
    cout<<"Enter how many times you want to display Jay ganesh on screen"<<"\n";
    cin>>iValue;

    DisplayClass dobj(iValue);
    dobj.Display();
    return 0;
}