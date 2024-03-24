/*1.Define a class Person with name and age as instance variables
as private members. Provide setters and getters as protected methods. 
Derive a class Employee from person class with private instance 
variable salary. Provide public methods setEmployee() and showEmployee()*/

#include<iostream>
#include<string.h>
using namespace std ;

class Person
{
    private :
        int age ;
        char name[30] ;
    protected :
        void setAge(int a)
        {
            age = a ;
        }
        void setName (char *n)
        {
            strcpy(name,n) ;
        }
        int getAge()
        {
            return age ;
        }
        char* getName ()
        {
            return name ;
        } 
};

class Employee : public Person
{
    private :
        float salary ;
    public :
        void setEmployee (int A , char* N , float S)
        {
            setAge(A) ;
            setName(N) ;
            salary = S ;
        }
        void showEmployee ()
        {
            cout<<"\nAge - "<<getAge() <<endl ;
            cout<<"Name - "<<getName()<<endl ;
            cout<<"Salary - "<<salary<<endl ;
        }
};

int main ()
{
    Employee e1 , e2 ;
    e1.setEmployee(20,"Nilufa Yasmin",200000.50) ;
    e1.showEmployee() ;
}
