//To write a program to demonstrate friend function in C++.  

#include <iostream>
using namespace std;
class class1{   
   int length , breadth ;   
   float square_area , rectangle_area;  
   public:
   	class1(){  
   		
   		length = 0 , breadth = 0 ;    
   		
	   }
	   
	   void calculation(){   
	   	 square_area=length*breadth;
   		 rectangle_area=length*breadth;
	cout<<"Area of the square is "<<square_area<<" sq. units"<<"\n"<<"Area of the Rectangle is "<<rectangle_area<<" sq. units"<<"\n";
}

friend void input_values(class1 &a);  //friend function

};
void input_values(class1 &a){  
	a.length=5;
	a.breadth=10;
}
int main()
{
	class1 a;  
	input_values(a);
	a.calculation();   
	return 0;
}



