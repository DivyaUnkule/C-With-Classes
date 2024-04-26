/* Write a program to accept an integer and check if it is even or odd.*/

#include<iostream>
using namespace std;

int main()
{
   int n1;
   cout<<"Enter a number"<<endl;
   cin>>n1;

   n1%2==0?cout<<n1<<" is Even":cout<<n1<<" is Odd";

    return 0;
}