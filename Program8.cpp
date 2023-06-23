// Write a program which accepts the marks and display the class accordingly.
//0-34  Fail
//35-49 Pass class
//50-59 Second Class
//60-74 First Class
//75-100 First Class with Destinction

#include<iostream>
using namespace std;

class Student
{
    public:
    float fNo;
    Student(int X)
    {
        fNo = X;
    }

    void Marks()
    {
        if((fNo>0.0f)&&(fNo<35.00f))
        {
            cout<<"You are fail"<<"\n";
        }
        else if((fNo>=35.00f)&&(fNo<50.00f))
        {
            cout<<"You got pass class"<<"\n";
        }
        else if((fNo>=50.00f)&&(fNo<60.00f))
        {
            cout<<"You got second class"<<"\n";
        }
        else if((fNo>=60.00f)&&(fNo<75.00f))
        {
            cout<<"You got first class"<<"\n";
        }
        else if((fNo>=75.00f)&&(fNo<100.00f))
        {
            cout<<"You got first class with distinction"<<"\n";
        }
    }


};
int main()
{
    float fValue = 0.0f;
    cout<<"Enter number"<<"\n";
    cin>>fValue;

    Student sobj(fValue);
    sobj.Marks();

    return 0;
}