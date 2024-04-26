/*11:Check if number is a prime number or not.: */

#include<iostream>
using namespace std;

int main()
{
    int num,i;
    cout<<"Enter the number"<<endl;
    cin>>num;

    for(i=2;i<num;i++)
    {
        if(num!=2 && num%i==0)
        {
            break;
        }
    }
    if(i==num)
    {
        cout<<num<<" is Prime"<<endl;
    }

    else
    {
      cout<<num<<" is Not Prime"<<endl;
    }
    return 0;
}