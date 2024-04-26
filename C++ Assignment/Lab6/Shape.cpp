/*Create a abstract class Shape with pure virtual method area;
Create Rectangle,Circle,Square class..inherit them from Shape class..Override area method.
Test these all classes by creating object of respective class.*/

#include<iostream>

using namespace std;
class Shape{
    public:
    virtual void displayArea()=0;
    virtual ~Shape() {}
};

class Rectangle:public Shape{
    private:
    int length;
    int breadth;

    public:
    Rectangle(int length=0,int breadth=0)
    {
        this->length=length;
        this->breadth=breadth;
    }
    void displayArea()
    {
        cout<<" Rectangle Area: "<<(length*breadth)<<endl;
    }
};
class Circle:public Shape{
    private:
    int radius;

    public:
    Circle(int radius=0)
    {
        this->radius=radius;
    }
    void displayArea()
    {
        cout<<"Circle Area: "<<(3.14*radius*radius)<<endl;
    }
};
class Square:public Shape{
    private:
   int side;

    public:
    Square(int side=0)
    {
        this->side=side;
    }
    void displayArea()
    {
        cout<<"Square Area: "<<(side*side)<<endl;
    }
};

int main()
{
    int choice;
    do{
        cout<<"Enter Your choice: \n1.Area of Rectangle\n2.Area of circle\n3.Area of Square\n4.exit"<<endl;
        cin>>choice;

        switch(choice)
        {
            case 1:
            {
            int length,breadth;
            cout<<"Enter length and breadth: "<<endl;
            cin>>length>>breadth;

            Rectangle R1(length,breadth);
            R1.displayArea();
            break;
            }

            case 2:
            {
            int radius;
            cout<<"Enter radius of circle: "<<endl;
            cin>>radius;

            Circle c1(radius);
            c1.displayArea();
            break;
            }

            case 3:
            {
            int side;
            cout<<"Enter side of square: "<<endl;
            cin>>side;

            Square s1(side);
            s1.displayArea();
            break;
            }
        }

    }while(choice!=4);

    return 0;
}