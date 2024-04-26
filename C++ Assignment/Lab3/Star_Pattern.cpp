/*Write a program to print following pattern.*/

#include<iostream>
using namespace std;

int main()
{
	for(int i=1;i<=5;i++)
	{
		int temp=i;
		while(temp>0)
		{
			cout<<"* ";
			temp--;
		}
		cout<<endl;
		
	}
	return 0;
}

