#include<iostrem>
using namespcae std;

int Addition(int i , int j)
{
    int result;
    result = i+j;
    return result;
}

float Addition(float i , float j)
{
    float result;
    result = i+j;
    return result;
}

double Addition(double i , double j)
{
    double result;
    result = i+j;
    return result;
}

int main()
{
    int i;
    float f;
    double d;

    i=Addition(10,11);
    cout<<i<<"\n";

    f=Addition(10.7f ,89.5f);
    cout<<f<<"\n";

    d=Addition(10.8,70.8);
    cout<<d<<"\n";


return 0;

}