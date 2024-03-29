/* 5. In question 3 & 4 , Derive a class StraightLine from shape class
with two Coordinate type objects as instace members. Provide methods
to setLine() , getDistance() and showLine().

4. Define a class Shape with ShapeName as instance variables.
provide setter and getter.

3.Define a class Coordinate with x and y as instance variables.
Define overloaded versions of getDistance(), first with no argument
calculating distance from origin and 2nd with one argument of Coordinate
type to calculate distance between two coordinates. Also define
other methods if required.*/

#include<iostream>
#include<string.h>
#include<math.h>
using namespace std ;

class Coordinate 
{
    private : 
        int x, y ;
    public :
        void setOrigin (int a, int b) { x = a ; y = b ; }
        double getDistance () { return sqrt((x*x) + (y*y)) ; }
        double getDistance (Coordinate m) 
        { 
            double f =  getDistance() - m.getDistance() ;
            return f ;
        }
        void ShowOrign()
        {
            cout<<"("<<x<<","<<y<<")"<<endl  ;
        }
        void ShowDistance ()
        {
            cout<<"\nX = "<<x<<" Y = "<<y<<endl ;
            cout<<"Distance = "<<getDistance()<<endl  ;
        }
} ;
class Shape 
{
    private : 
        char ShapeName[30] ;
    public:
        void SetShapeName(const char name []) {  strcpy(ShapeName,name) ; }
        char* getShapeName() { return ShapeName ;}
        void ShowShapeName() { cout<<"Shape Name - "<<getShapeName()<<endl ; }
};
class StraightLine : public Shape
{
    private :
        Coordinate c1 , c2 ;
    public :
        void setLine (int x, int y, int m , int n )
        {

            c1.setOrigin(x,y) ;
            c2.setOrigin(m,n) ;
        }
        double getDistance ()
        {
            return c1.getDistance(c2) ;
        }
        void ShowLine ()
        {
            cout<<"\nShape Name - "<<getShapeName()<<endl ;
            cout<<"c1 = ";
            c1.ShowOrign() ;
            cout<<"c2 = ";
            c2.ShowOrign() ;
            cout<<"Distance = "<<getDistance() ;
            cout<<endl ;
        }

} ;

int main ()
{
    StraightLine s ;
    s.SetShapeName("Straight") ;
    s.setLine(10,12,4,5) ;
    s.ShowLine() ;

    


    return 0 ;
}
