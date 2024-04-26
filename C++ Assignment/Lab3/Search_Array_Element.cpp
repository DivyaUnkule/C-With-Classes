/*Write a program to accept array  from user .Accept number from user and search number is present in array or not.*/
#include<iostream>
using namespace std;

void binary_Search(int arr[],int key,int size)
{
	int right=size-1,left=0,mid,i;
	for(i=0;i<size;i++)
	{
		mid=(left+right)/2;
		
		if(key==arr[mid])
		{
			cout<<key<<"found at "<<mid+1<<" position"<<endl;
			break;
			
		}
	   else	if(key>arr[mid])
		{
		left=mid+1;
		}
	   else if(key<arr[mid])
	   {
		right=mid-1;
	   }
	
		
	}
	if(i==size)
	{
		 
	   	cout<<key<<"is not present in an array"<<endl;
	   
	}
	
	
	
}


int main()
{

int size,key;
  cout<<"entre size";
  cin>>size;
  int arr[size];
  cout<<"enter "<<size<<" elements"<<endl;
  for(int i = 0; i<size ; i++){
  	cin>>arr[i];
  }
  cout<<"Eneter element to search: "<<endl;
  cin>>key;  
  binary_Search(arr,key,size);
  
  return 0;
}
