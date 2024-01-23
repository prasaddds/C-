#include<iostream>
using namespace std;
//class A has two derived classes (class B,class C)(Heiearchial)
//class D is derived from two classes class B, class C(multiple)
//int a is in class A
//when inherited class B, class C have int a
//when class d is inherited from class B, class C then, class d have two a's one from class B, one from class C
//ambiguity arises(how to solve)
//class B, class C are vitual base clasesxxxxxx
//class B:virtual public A
//class C:virtual A
//A is virtual base class
/*
To solve this ambiguity we will make class “A” as a virtual base class. To make a virtual base class “virtual” keyword is used.

When one class is made virtual then only one copy of its data member and member function is passed to the classes inheriting it. 
So in our example when we will make class “A” a virtual class then only one copy of the data member and member 
function will be passed to the classes “B” and “C” which will be shared between all classes. This will help to solve the ambiguity.
*/
#include <iostream> 
using namespace std; 
class A { 
public: 
    void say() 
    { 
        cout << "Hello world"<<endl; 
    } 
}; 
class B : public virtual A { 
};   
class C : public virtual A { 
};   
class D : public B, public C { 
}; 

