//17:Write a program to check entered number is Armstrong number or not.

#include<iostream>
using namespace std;

int main()
{
    int num,temp,temp1,sum=0,d=0,mul,r;

    cout<<"Enter Number: "<<endl;
    cin>>num;
    temp=num;
    temp1=num;

    while(num!=0)
    {
        d++;
        num=num/10;
    }

    while(temp!=0)
    {  
        r=temp%10;
        mul=1;
        for(int i=1;i<=d;i++) 
        {
            mul=mul*r;
        }
        sum=sum+mul;
        temp=temp/10;
    }
    if(sum==temp1)
    {
        cout<<temp1<<" is armstrong number"<<endl;
    }
    else
    {
        cout<<temp1<<" is not armstrong number"<<endl;
    }
    return 0;
}