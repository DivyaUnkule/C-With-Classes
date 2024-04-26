/*Write a program to accept two integers x and n and compute x raised to n.*/

#include<iostream>
using namespace std;

int main()
{
    int x,n,pow=1,temp;
    cout<<"Enter number"<<endl;
    cin>>x;

    cout<<"Enter power"<<endl;
    cin>>n;
    temp=n;

     while(n!=0)
     {
        pow=pow*x;
        n--;
     }

    cout<<x<<" ^ "<<temp<<" : "<<pow<<endl;


    return 0;
}