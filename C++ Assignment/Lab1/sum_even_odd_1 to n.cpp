//14:Write a  program to find sum of all even and odd numbers between 1 to n. 

#include<iostream>
using namespace std;

int main()
{
    int num,sum_eve=0,sum_odd=0,i=1;

    cout<<"Enter NUmber upto which you want the addition of even and odd"<<endl;
    cin>>num;
 
     while(i<=num)
     {
        if(i%2==0)
        {
            sum_eve=sum_eve+i;
        }
        else if(i%2!=0)
        {
            sum_odd=sum_odd+i;
        }
        i++;
     }

    cout<<"Sum of Even Numbers: "<<sum_eve<<endl;
    cout<<"Sum of Odd Numbers: "<<sum_odd<<endl;

   return 0;
}