#include<iostream>
using namespace std;

int main()
{
    int iSize = 0;
    int iCnt = 0;

    cout<<"Enter number of elements "<<"\n";
    cin<<iSize;
    *Arr = new  int[iSize];

    for(iCnt = 0; iCnt< iSize ; iCnt++)
    {
        cin>>Arr[iCnt];
    }

    cout<<"Element of array are :"<<"\n";
    for(iCnt = 0; iCnt< iSize ; iCnt++)
    {
        cout<<*Arr[iCnt];
    }
    return 0;
}
