/*Write a program to Accept a number and display its sum of digits.:ex 568    5+6+8=19*/
#include<iostream>
using namespace std;

int main()
{
	
	int num,sum=0;
	
	cout<<"Enter Number: "<<endl;
	cin>>num;
	
	while(num>0)
	{
		sum=sum+(num%10);
		num=num/10;
	}
	
	cout<<"Sum of digits: "<<sum<<endl;
	
	
return 0;
}

