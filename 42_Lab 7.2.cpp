/* To write a program to demonstrate friend class in C++.  */

#include <iostream>
using namespace std;
class first_class{          
private:              
   int A = 10;    
   int B = 20;
   int C = A+B;
   int D = A-B;
   int E = A*B;
   float F = (float)A/B ;
   
public:               //access specifier
   friend class second_class;  //declaring the friend class
};

class second_class {  
public:  //access specifier
   void display_output(first_class object1){
   	  
      cout<<"Value of A is "<<object1.A<<endl;   //performinng various mathematical operations sucha as multiplication , addition, division ,subtraction
      cout<<"Value of B is "<<object1.B<<endl;
      cout<<"Value of C= A+B is "<<object1.C<<endl;
      cout<<"Value of D= A-B is "<<object1.D<<endl;
      cout<<"Value of E= A*B is "<<object1.E<<endl;
      cout<<"Value of F= A/B is "<<object1.F<<endl;
   }
};
int main() {
   second_class object1; //object creation 
   first_class object2;
   object1.display_output(object2);  //calling the method using the object of the class
   return 0;
}
