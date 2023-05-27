#include<iostream>
using namespace std;

const int A=10;
int main()
{
    const int B = 20;

    const int Arr[4] = {10,20,30,40};

    //const int No; // it is not intialised and default value is 0
    //No =11; // it will generate error

    const int No = 11;
  
  /* It will generate error for constantn
    A= 11;
    A++;
    B=21;
    B++;
    B--;
    A--;
    Arr[1] = 21;
    Arr[2]++;
    */
    return 0;
}