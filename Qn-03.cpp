/*3.Define a class Coordinate with x and y as instance variables.
Define overloaded versions of getDistance(), first with no argument
calculating distance from origin and 2nd with one argument of Coordinate
type to calculate distance between two coordinates. Also define
other methods if required.*/

#include<iostream>
#include<math.h>
using namespace std ;
class Coordinate 
{
    private : 
        int x, y ;

    public :
        void setOrigin (int a, int b) { x = a ; y = b ; }
        double getDistance ()
        {
            return sqrt((x*x) + (y*y)) ;
        }
        void getDistance (Coordinate m)
        { 
            double f =  getDistance() - m.getDistance() ;
            cout<<"Distance of two coordinates is "<<f<<endl ;
        }
        void ShowDistance ()
        {
            cout<<"\nX = "<<x<<" Y = "<<y<<endl ;
            cout<<"Distance = "<<getDistance()<<endl  ;
        }
} ;
int main ()
{
    Coordinate c1 , c2 ;
    c1.setOrigin(4,5) ;
    c2.setOrigin(10,20) ;

    c1.getDistance() ;
    c2.getDistance() ;

    c1.ShowDistance() ;
    c2.ShowDistance() ;

    c2.getDistance(c1) ;

    return 0 ;
}
