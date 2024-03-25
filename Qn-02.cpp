/*2.Define a class Circle with Radius as private instance variable
and setRadius(), getRadius() and getArea() as public members. 

Define a class ThickCircle as a subClass of Circle with Thickness
as private instance variable and getThickness(), setThickness()
as public instance methods. Provide an overridden method getArea()
to calculate area of thick portion of Circle.*/

#include<iostream>
#include<string.h>
using namespace std ;

class Circle
{
    private :
        int radius ;
    public :
        void setRadius(int r)
        {
            radius = r ;
        }
        int getRadius()
        {
            return radius ;
        }
        float getArea ()
        {
            return 3.14*radius*radius ;
        }
        
};

class ThickCircle : public Circle
{
    private :
        int thickness ;
    public :
        void setThickness (int diameter )
        {
            thickness = diameter ;
        }
        int getThickness ()
        {
            return thickness ;
        }
        float getArea ()
        {
            return (3.14*(getRadius()+thickness)*(getRadius()+thickness)) - (3.14*getRadius()*getRadius()) ;
        }
        void showArea()
        {
            cout<<getRadius()<<" "<<thickness<<" "<<getArea()<<endl ;
        }

};

int main ()
{
    ThickCircle t1 ;
    t1.setRadius(5) ;
    t1.setThickness(10) ;
    t1.getArea() ;
    t1.showArea() ;
}
