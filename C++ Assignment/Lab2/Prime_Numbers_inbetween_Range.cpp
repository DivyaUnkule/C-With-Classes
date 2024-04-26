/*Write a program to print all prime numbers between 1 to n*/

#include<iostream>
using namespace std;
void isPrime(int i)
{
    int flag=0;
    for(int j=2;j<i;j++)
    {
        
        if(i!=2 && i%j==0)
        {
            flag=1;
            break;
        }
        
    }
    if(flag==0)
    {
        cout<<i<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter the number till which you want to display the prime numbers"<<endl;
    cin>>n;

    for(int i=2;i<=n;i++)
    {
        isPrime(i);
    }
    return 0;
}