/*Create a class Point with data members as x,y. Create Default and Parameterized constructors. Write 
getters and setters for all the data members. Also add the display function. Create the object of this 
class in main method and invoke all the methods in that class. */

#include<iostream>
using namespace std;

class Point{

    private:
    int x;
    int y;

    public:
    Point()
    {
      this->x=0;
      this->y=0;
    }
    Point(int x,int y)
    {
        this->x=x;
        this->y=y;
    }
    void setX(int x)
    {
        this->x=x;
    }
    int getX()
    {
        return this->x;
    }
    void setY(int Y)
    {
        this->y=Y;
    }
    int getY()
    {
        return this->y;
    }
    void displayPoints()
    {
        cout<<"X: "<<x<<endl;
        cout<<"Y: "<<y<<endl;
    }
};
int main()
{
    int x;
    int y;

    Point P1(10,20);
    P1.displayPoints();

    Point P2;
    cout<<"Enter Point X: "<<endl;
    cin>>x;
    P2.setX(x);
    cout<<"X: "<<x<<endl;

    cout<<"Enter Point Y: "<<endl;
    cin>>y;
    P2.setY(y);
    cout<<"Y: "<<y<<endl;

    P2.displayPoints();

    return 0;
}