/*1:Write a program to create student class with data members rollno, marks1,mark2,mark3.
Accept data (acceptInfo()) and display  using display member function.
Also display total,percentage and grade.
*/

#include<iostream>
using namespace std;


class Student
{
    private:
    int rollNo;
    int marks1;
    int marks2;
    int marks3;
     int total()
     {
        return (marks1+marks2+marks3);
     }

     float percentage()
     {
         return (total()*100)/300;
     }


    public:
    void acceptInfo(int rollNo,int marks1,int marks2,int marks3)
    {
       this->rollNo=rollNo;
       this->marks1=marks1;
       this->marks2=marks2;
       this->marks3=marks3;
    }
    void displayInfo()
    {
       cout<<"rollNo: "<<rollNo<<endl;
       cout<<"marks1: "<<marks1<<endl;
       cout<<"marks2: "<<marks2<<endl;
       cout<<"marks3: "<<marks3<<endl;

       cout<<"Your Total marks out of 300: "<<total()<<endl;
       cout<<"Your Percentage: "<<percentage()<<endl;
    }
    char getGrade()
    {
       if(percentage()>=90)
       {
          return 'A';
       }
       else if(percentage()<=90 && percentage()>=70)
       {
          return 'B';
       }
       else if(percentage()<=70 && percentage()>=60)
       {
          return 'C';
       }
       else if(percentage()<=60 && percentage()>=40)
       {
          return 'D';
       }

    }

};

int main()
{
   int rollNo;
    int marks1;
    int marks2;
    int marks3; 
   Student s1;
   cout<<"Enter \n1.rollNo\n2.marks1\n2.marks2\n3.marks3"<<endl;
   cin>>rollNo>>marks1>>marks2>>marks3;

s1.acceptInfo(rollNo,marks1,marks2,marks3);

cout<<"Your Information:"<<endl;
s1.displayInfo();

cout<<"Your Grade: "<<s1.getGrade()<<endl;


    return 0;
}