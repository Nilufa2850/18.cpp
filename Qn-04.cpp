/* 4. Define a class Shape with ShapeName as instance variables.
provide setter and getter. */

#include<iostream>
#include<string.h>
#include<math.h>
using namespace std ;


class Shape 
{
    private : 
        char ShapeName[30] ;
    public:
        void SetShapeName(const char name []) {  strcpy(ShapeName,name) ; }
        char* getShapeName() { return ShapeName ;}
        void ShowShapeName() { cout<<"Shape Name - "<<getShapeName()<<endl ; }
};

int main ()
{
    Shape s1 ;
    s1.SetShapeName("Triangle") ;
    s1.ShowShapeName() ;
    return 0 ;
}
