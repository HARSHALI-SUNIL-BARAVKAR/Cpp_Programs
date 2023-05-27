#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
      int no1=0;
      int no2=0;
/*
      printf("Enter the number1\n");
      scanf("%d",&no1);
      printf("enter the nummber2\n");
      scanf("%d",&no2);
  */

  cout<<"Enter the value of no1\n";
  cin>>no1;
  cout<<"Enter the value of no2\n";
  cin>>no2;
     
if(no1<no2)
{
cout<<"max number is \n"<<no2<<"\n";

}
if(no1>no2)
{
cout<<"max number is \n"<<no1<<"\n";

}
   return 0;
}