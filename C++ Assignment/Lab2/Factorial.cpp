/*Write a program to calculate factorial of a number. 
For e.g. factorial of 5 = 5! = 5 *4*3*2*1 = 120*/

#include<iostream>
using namespace std;

int fact(int n)
{
    int f=1,temp=n;
    if(n==0)
    {
        return 1; 
    }
    f=temp*fact(--n);
    return f;
}
int main()
{
    int n,factorial;
    cout<<"Enter an integer"<<endl;
    cin>>n;

    factorial=fact(n);
    cout<<"Factorial:\n"<<n<<"! = "<<factorial<<endl;
    return 0;
}