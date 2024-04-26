/*Write a program to create student class with data members rollno, marks1,mark2,mark3.
Accept data (acceptInfo()) and display  using display member function.
Also display total,percentage and grade.*/

#include<iostream>
using namespace std ;
class student{
	private :
	 int Roll_No ;
	 int 	M_Maths ;
	int	M_Science;
	int	M_English;
		
 public :
 void acceptInfo(){
   cout<<"Enter the rollno , maths marks , science marks , english marks "<<endl;
   cin>>Roll_No>>M_Maths>>M_Science>>M_English;
 }
 
 void display(){
 	cout<<"Roll no :"<<Roll_No;
 	cout<<" Maths Marks :"<<M_Maths;
 	cout<<"Science Marks :"<<M_Science;
 	cout<<"English Marks:"<<M_English;
 	
 }
 
 int getTotal(){
 	int total ;
 	total = M_Maths+M_Science+M_English;
 	return total ;
 	
 }
  float getPercentage(){
 	float percent = (getTotal() * 100) / 300;
 	return percent;
 }
};


int main(){
	int total ; 
	float percent ;
 student s ;
    	s.acceptInfo();
	s.display();
 total=	s.getTotal();
 percent=s.getPercentage();
 cout<<"total : "<<total<<endl;
 cout<<"percent : "<<percent<<endl;
 
 if(percent  >=90.00)
	cout<<"Grade A";
	else if(percent<=90.00 && percent>=80.00)
	cout<<"Grade B";
	else if(percent<=80.00 && percent>=60.00)
	cout<<"Grade C";
	 else if(percent<=60.00 && percent>=40.00)
	cout<<"Grade D";
	else 
	cout<<"Fail";
	
	
 return 0 ;
}
