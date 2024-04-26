// Write a program to calculate factorial of a number. 
//For e.g. factorial of 5 = 5! = 5 *4*3*2*1 = 120

#include<iostream>
using namespace std;

int main(void)
{
    int num,fact=1,temp;
    cout<<"Enter any number to calculate the factorial"<<endl;
    cin>>num;
    temp=num;
    if(num!=0)
    {
    do{
        fact=fact*num;
        num--;
    }while(num>0);
    }
    else{
        fact=1;
    }
    cout<<"Factorial of "<<temp<<" : "<<fact<<endl;
    return 0;
}