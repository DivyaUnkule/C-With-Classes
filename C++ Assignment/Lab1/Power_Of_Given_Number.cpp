//Write a program to accept two integers x and n and compute x raised to n.

#include<iostream>
using namespace std;

int main(void)
{
    int x,n,pow=1;
    cout<<"Enter the number\n"<<endl;
    scanf("%d",&x);
    

    cout<<"Enter the power which you want to calculate for the number"<<endl;
    cin>>n;

    for(int i=1;i<=n;i++)
    { 
        pow*=x;
    }

    cout<<x<<" ^ "<<n<<" : "<<pow<<endl;
    return 0;
}