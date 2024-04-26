/*Write a program to create an array of integers and perform following operations on that array like 
finding the sum, average, maximum and minimum number in that array. Accept the numbers of the 
array from user. */
#include<iostream>
using namespace std ;

 void sum(int arr[], int size){
  int sum = 0 ;
 	for(int i = 0; i<size ; i++){
  	   sum = sum+arr[i];
  } 
  cout<<"sum :"<<sum <<endl;
 }

 void average(int arr[], int size){
 	 int sum = 0 , avg ;
 	for(int i = 0; i<size ; i++){
  	   sum = sum+arr[i];
  } 
   avg = sum/size;
   cout<<"average :"<< avg <<endl;
 	
 }
 void MaxAndMin(int arr[], int size){
 	int min = arr[0];
 	int max= arr[0];
 	for(int i = 0 ;i<size ; i++){
 		if(arr[i]>max)
 		  max = arr[i];
 	   else if(arr[i]<min)
 		  min = arr[i];
		 }
	cout<<"Max = " <<max <<"Min = "<<min<<endl;	 
	 }
 	
 
int main(){
 int choice ;
  int size ;
  cout<<"entre size";
  cin>>size;
  int arr[size];
  cout<<"enter "<<size<<" elements"<<endl;
  for(int i = 0; i<size ; i++){
  	cin>>arr[i];
  }
do
{
cout<<"Enter Your Choice: \n1.sum\n2.average\n3.MaxandMin\n5.exit"<<endl;
cin>>choice;
 
switch(choice)
{
    case 1:
    sum(arr,size);
   break;
    case 2:
    average(arr,size);
 break;
    case 3:
    MaxAndMin(arr,size);
break;
    
}
}while(choice!=5);
    return 0;

}


