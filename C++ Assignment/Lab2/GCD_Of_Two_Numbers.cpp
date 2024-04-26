/*Accept two numbers and calculate GCD of them.*/

#include<iostream>
using namespace std;
int main(void)
{
    int n1,n2;

    cout<<"Enter two numbers to calculate GCD:"<<endl;
    cin>>n1>>n2;

    int GCD=1;
    if(n1>n2)
    {
       for(int i=1;i<n2;i++)
       {
          if(n1%i==0 && n2%i==0)
          {
            if(i>=GCD)
            {
                GCD=i;
            }
          }
       }
    }
    else{
         for(int i=1;i<n1;i++)
       {
          if(n1%i==0 && n2%i==0)
          {
            if(i>=GCD)
            {
                GCD=i;
            }
          }
       }
    }
    cout<<"GCD of "<<n1<<" and "<<n2<<": "<<GCD;
    

    
    return 0;
}