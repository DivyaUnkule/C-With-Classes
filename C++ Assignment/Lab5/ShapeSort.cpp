/*Shape Sorting with Interfaces:
Problem Statement: Implement a shape sorting program. 
Define a base class Shape with properties like area and perimeter. 
Create derived classes like Circle, Rectangle, and Triangle. 
Implement an interface Sortable with a method to compare shapes by area. Use this interface to sort a list of shapes.
*/


#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Sortable {
public:
    virtual void sortArea(vector<float>& arr) = 0;
};

class Shape {
public:
    virtual float calArea() = 0;
};

class Circle : public Shape {
private:
    float r;

public:
    Circle(float r) : r(r) {}

    float calArea() override {
        return 3.14 * r * r;
    }
};

class Rectangle : public Shape {
private:
    float l, b;

public:
    Rectangle(float l, float b) : l(l), b(b) {}

    float calArea() override {
        return l * b;
    }
};

class Triangle : public Shape {
private:
    float b, h;

public:
    Triangle(float b, float h) : b(b), h(h) {}

    float calArea() override {
        return (b * h) / 2;
    }
};

class ShapeSorter : public Sortable {
public:
    void sortArea(vector<float>& arr) override {
        sort(arr.begin(), arr.end());
    }
};

int main() {
    vector<float> arr_circle;
    vector<float> arr_rectangle;
    vector<float> arr_triangle;

    Circle circles[] = { Circle(10.0), Circle(20.0), Circle(30.0) };
    Rectangle rectangles[] = { Rectangle(5.0, 10.0), Rectangle(3.0, 6.0), Rectangle(8.0, 12.0) };
    Triangle triangles[] = { Triangle(5.0, 10.0), Triangle(3.0, 6.0), Triangle(8.0, 12.0) };

    for (auto& circle : circles)
        arr_circle.push_back(circle.calArea());

    for (auto& rectangle : rectangles)
        arr_rectangle.push_back(rectangle.calArea());

    for (auto& triangle : triangles)
        arr_triangle.push_back(triangle.calArea());

    ShapeSorter sorter;
    
    cout << "Sorting circles by area:" << endl;
    sorter.sortArea(arr_circle);
    for (const auto& area : arr_circle)
        cout << area << endl;

    cout << "Sorting rectangles by area:" << endl;
    sorter.sortArea(arr_rectangle);
    for (const auto& area : arr_rectangle)
        cout << area << endl;

    cout << "Sorting triangles by area:" << endl;
    sorter.sortArea(arr_triangle);
    for (const auto& area : arr_triangle)
        cout << area << endl;

    return 0;
}
