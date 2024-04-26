/*Create a class Date with data members as dd, mm, yy. 
Write getters and setters for all the data members. Also add the display function. 
Create Default and Parameterized constructors. Create the 
object of this class in main method and invoke all the methods in that class. */

#include<iostream>
using namespace std;

class Date{
    private:
    int dd;
    int mm;
    int yy;

    public:
    Date()
    {
        this->dd=0;
        this->mm=0;
        this->yy=0;
    }

    Date(int dd,int mm,int yy)
    {
        this->dd=dd;
        this->mm=mm;
        this->yy=yy;
    }

    void setDate(int dd)
    {
        this->dd=dd;
    }

    int getDate()
    {
        return this->dd;
    }

    void setMonth(int mm)
    {
        this->mm=mm;
    }

    int getMonth()
    {
        return this->mm;
    }

    void setYear(int yy)
    {
        this->yy=yy;
    }

    int getYear()
    {
        return this->yy;
    }

    void displayDate()
    {
        cout<<dd<<" / "<<mm<<" / "<<yy<<endl;
    }


};
int main()
{
    int dd,mm,yy;
    Date d1(14,6,2000);
    d1.displayDate();
    Date d2;

    cout<<"Enter Date: "<<endl;
    cin>>dd;
    d2.setDate(dd);
    cout<<"Set Date: "<<d2.getDate()<<endl;

    cout<<"Enter Month: "<<endl;
    cin>>mm;
    d2.setMonth(mm);
    cout<<"Set Date: "<<d2.getMonth()<<endl;

    cout<<"Enter Year: "<<endl;
    cin>>yy;
    d2.setYear(yy);
    cout<<"Set Date: "<<d2.getYear()<<endl;

    d2.displayDate();


    return 0;

}