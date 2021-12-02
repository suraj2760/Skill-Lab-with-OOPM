package javaprogramming2;

import java.util.Scanner;

class Emp{    //creating a class
	int Permanent_EmpID=1;   //attributes
	int Temporary_EmpID=2;  //attributes 
	float Salary=50000;    //attributes 
	void Output_Salary_Permanent() {   //methods to display salary
		System.out.println("Salary of the Permanent Employee is: Rs. " + Salary);
	}
	void Output_Salary_Temporary() {
		System.out.println("Salary of the Temporary Employee is: Rs. " + Salary);
	}
	
}
class Permanent_Employee extends Emp{  //inherited class 
	float increment_on_salary =10;
	void increment() {   //methods to display the employee info and salary calculations
		System.out.println("Permanent Employee ID :"+Permanent_EmpID);
		System.out.println("Permanent Employee salary hike percentage :"+increment_on_salary+" % ");
		super.Output_Salary_Permanent();
		System.out.println("Salary of the permanent employee after adding the increment is: Rs." +(Salary+((Salary*increment_on_salary)/100)));
		
	}
}
class Temporary_Employee extends Emp{   //inherited class
	
	float increment_on_salary =5;
	void increment() {   //methods to display the employee info and salary calculations
		System.out.println("Temporary Employee ID :"+Temporary_EmpID);
		System.out.println("Temporary Employee salary hike percentage :"+increment_on_salary+" % ");
		super.Output_Salary_Temporary();
		System.out.println("Salary of the temporary employee after adding the increment is: Rs." +( Salary +((Salary*increment_on_salary)/100)));
	}
} 
public class Lab8_2 {
	public static void main(String[] args) {  //main function
		Permanent_Employee object1 = new Permanent_Employee();   //creating a object 
		Temporary_Employee object2 = new Temporary_Employee();   //creating a object 
		object1.increment();     //calling the methods using the objects
		object2.increment();     //calling the methods using the objects
	} 

}