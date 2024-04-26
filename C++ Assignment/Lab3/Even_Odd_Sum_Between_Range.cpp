// Write a  program to find sum of all even and odd numbers between 1 to n
#include<iostream>
using namespace std ;
int main(){
	int n ,sum_Even=0 , sum_Odd =0;
	 cout<<"Enter the last digit"<<endl;
	 cin>>n;
	 
	while(n>0){
	 if(n%2==0){
	 	sum_Even+=n;
	 }
	 else {
	 	sum_Odd = sum_Odd + n ;
	 	
	 }
	 n-- ;
	}
	
	cout<<"Sum of even :" <<sum_Even <<endl;
	cout<<"Sum of odd :" <<sum_Odd<<endl ;
	return 0 ;
}
