/*To perform Hierarchical Inheritance in C++. Create an Employee class
with attributes EmpID and EmpSalary. Also create necessary methods/constructors to accept
these values from the user. Create classes permenantEmployee and TemporaryEmployee 
which will be derived classes of Employee. Mention hike attribute in these derived classes
and calculate the total salary using generate_salary() method for respective types 
of employees. Objects of the derived classes should be created and salaries for the permanent
and temporary employees should be calculated and displayed on the screen.*/

#include<iostream>
using namespace std;
 
class Employee{    //creating a class 
	public:     //access specifier  
		int EmpID;    //attributes 
		float EmpSalary;   //attributes
		Employee(){
			cout<<"Enter your ID : "<<endl;
			cin>>EmpID;
			cout<<"Enter your salary : "<<endl;
			cin>>EmpSalary;
		}
};

class Permenant_Employee : public Employee{
	public:
		float hike_permanent_emp , total_salary_permanent_emp;
		void generate_Salary(){
			cout<<"Enter the percentage hike for permanent employee : "<<endl;
			cin>>hike_permanent_emp;
			total_salary_permanent_emp = EmpSalary + ((EmpSalary * hike_permanent_emp )/100);
			cout<<"The Salary of the Permanent Employee is : "<<total_salary_permanent_emp<<" Rs."<<endl;
		}
};

class Temporary_Employee : public Employee{
	public:
		float hike_temporary_emp, total_salary_temporary_emp;
		void generate_Salary(){
			cout<<"Enter the percentage hike for temporary employee : "<<endl;
			cin>>hike_temporary_emp;
			total_salary_temporary_emp = EmpSalary + ((EmpSalary * hike_temporary_emp )/100);
			cout<<"The Salary of the Temporary Employee is : "<<total_salary_temporary_emp<<" Rs."<<endl;
		}
};

int main(){
	Permenant_Employee ob1;  //creating objects
	ob1.generate_Salary();   //calling methods with the help of objects
	
	Temporary_Employee ob2;   
	ob2.generate_Salary();
	return 0;
}


