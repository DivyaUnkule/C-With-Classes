//15: Write a  program to enter a number and print its reverse.

#include<iostream>
using namespace std;

int main()
{
    int num,rev=0,r;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    int temp=num;
    while(num!=0)
    {
       r=num%10;
       rev=(rev*10)+r;
       num=num/10;
    }
    cout<<"Reverse of "<<temp<<" = "<<rev<<endl;

    return 0;
}