/*Write a program to swap two numbers.*/

#include<iostream>
using namespace std;

int main()
{
    int n1,n2,temp;
   cout<<"Enter Two Numbers"<<endl;
   cin>>n1>>n2;

    cout<<"Before Swap:\n"<<"n1: "<<n1<<"\tn2: "<<n2<<endl;

    temp=n1;
    n1=n2;
    n2=temp;

    cout<<"After Swap:\n"<<"n1: "<<n1<<"\tn2: "<<n2<<endl;
    return 0;
}