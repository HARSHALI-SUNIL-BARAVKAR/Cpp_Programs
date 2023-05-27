#include<string.h>
#include<iostream>
using namespace std;

int main()
{

    char ch='D';

    char Name1[6]={'H','E','L','L','O','\0'};

    char Name2[]={'H','E','L','L','O','\0'};
    
    char Name3[]="HELLO";

    cout<<sizeof(Name1)<<"\n";
    cout<<sizeof(Name2)<<"\n";
    cout<<sizeof(Name3)<<"\n";

    cout<<strlen(Name1)<<"\n";
    cout<<strlen(Name2)<<"\n";
    cout<<strlen(Name3)<<"\n";
 

    return 0;
}