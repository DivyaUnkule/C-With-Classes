//16:Write a  program to print all Prime numbers between 1 to n. 

#include<iostream>
using namespace std;

int main()
{
    int num,i=1,j;

    cout<<"Enter a number"<<endl;
    cin>>num;

    cout<<"Prime Numbers from 1 to "<<num<<endl; 

    while(i<=num)
    {
        for(j=2;j<num;j++)
        {
            if(i!=2 && i%j==0)
            {
                break;
            }
        }
        if(i==2 || j==i)
        {
            cout<<i<<" ";
        }
        i++;
    }
    return 0;
}