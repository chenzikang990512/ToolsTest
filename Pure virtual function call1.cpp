/**
 * "pure virtual function call" on win32 platform
 * filename: testWin32PVFC.cpp
 */ 
#include <iostream> 
  
#define PI 3.1415926 
using namespace std; 
   
class Shape 
{ 
private: 
    double ValuePerSquareUnit; 
   
protected: 
    Shape(double valuePerSquareUnit): 
        ValuePerSquareUnit(valuePerSquareUnit) 
    { 
        //error LNK2001: unresolved external symbol "public: virtual double __thiscall Shape::area(void)const " (?area@Shape@@UBENXZ) 
        //std::cout << "creating shape, area = " << area() << std::endl; 
        std::cout << "creating shape, value = " << value() << std::endl;  //indirectly call pure virtual function in constructor 
    } 
   
public: 
    virtual double area() const = 0; 
   
    double value() const 
    { 
        return ValuePerSquareUnit * area(); 
    } 
   
    virtual ~Shape() 
    { 
        printf("Shape::~Shape() is called"); 
    } 
   
    double getPerSquareUnit() 
    { 
        return ValuePerSquareUnit; 
    } 
}; 
   
class Rectangle : public Shape 
{ 
private: 
    double Width; 
    double Height; 
   
public: 
    Rectangle(double width, double height, double valuePerSquareUnit): 
        Shape(valuePerSquareUnit),Width(width),Height(height) 
    { 
    } 
   
    virtual ~Rectangle()  //can be removed 
    { 
    } 
   
    virtual double area() const 
    { 
        return Width * Height; 
    } 
   
}; 
   
class Circle: public Shape 
{ 
    double Radius; 
   
public: 
    Circle(double radius, double valuePerSquareUnit): 
        Shape(valuePerSquareUnit),Radius(radius) 
    { 
    } 
   
    virtual ~Circle()  //can be removed 
    { 
    } 
   
    virtual double area() const 
    { 
        return PI * Radius * Radius; 
    } 
}; 
   
   
int main() 
{ 
    Rectangle* pr = new Rectangle(30, 20, 10); 
    Circle* pc = new Circle(15, 10); 
   
    //invoke Rectangle::area() 
    printf("rectangle: area = %.2f, PerSquareUnit = %.2f, value = %.2f/n", pr->area(), pr->getPerSquareUnit(), pr->value()); 
    //invoke Circle::area() 
    printf("circle   : area = %.2f, PerSquareUnit = %.2f, value = %.2f/n", pc->area(), pc->getPerSquareUnit(), pc->value()); 
   
    Shape* shape; 
    shape = pr; 
    printf("rectangle: area = %.2f, PerSquareUnit = %.2f, value = %.2f/n", shape->area(), shape->getPerSquareUnit(), shape->value()); 
   
    shape = pc; 
    printf("circle   : area = %.2f, PerSquareUnit = %.2f, value = %.2f/n", shape->area(), shape->getPerSquareUnit(), shape->value()); 
   
    return 0; 
} 