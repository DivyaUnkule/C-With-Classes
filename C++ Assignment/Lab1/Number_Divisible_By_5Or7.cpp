/*Write a program to accept a number and check if it is divisible by 5 and 7.*/

#include<iostream>
using namespace std;

int main()
{
   int n1;
   cout<<"Enter a number"<<endl;
   cin>>n1;

   n1%5==0?n1%7==0?cout<<n1<<" is divisible by 5 and 7":cout<<n1<<" is divisible by 5":cout<<n1<<" is divisible by 7";

    return 0;
}