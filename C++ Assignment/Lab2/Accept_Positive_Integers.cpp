/*Write a program that accepts numbers continuously as long as the number is positive and prints the 
sum of the given numbers. */

#include<iostream>
using namespace std;

int main()
{
    int sum=0,num=0;
    do{
        cout<<"Enter Positive Integer"<<endl;
        cin>>num;
        
        if(num>0)
        {
        sum=sum+num;
        }

    }while(num>0);

    cout<<"Sum of entered positive Integers: "<<sum<<endl;

    return 0;
}