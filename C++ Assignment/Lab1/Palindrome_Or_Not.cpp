//13:Check whether the number is palindrome or not?

#include<iostream>
using namespace std;

int main()
{
    int num,r,n=0;
    cout<<"Enter Number"<<endl;
    cin>>num;

    int temp=num;

    while(num!=0)
    {
        r=num%10;
        n=(n*10)+r;
        num=num/10;
    }
    if(n==temp)
    {
        cout<<temp<<" is palindrome number"<<endl;
    }
    else
    {
        cout<<temp<<" is not a palindrome number"<<endl;
    }

    return 0;
}