/*Write a program to calculate factors of a given number*/

#include<iostream>
using namespace std;

int main(void)
{
    int num;

    cout<<"Enter any number"<<endl;
    cin>>num;

    cout<<"Factors of "<<num<<endl;

    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            cout<<i<<endl;
        }
    }

    return 0;
}