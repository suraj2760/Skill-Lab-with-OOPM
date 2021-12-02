package inheritance;
import java.util.Scanner;

class person{
	Scanner t= new Scanner(System.in);
	String name;
	int age;
	String address;
	void printData() {
		System.out.println("Enter the name,age and address of the person ");
		name=t.next();
		age=t.nextInt();
		address=t.next();
	}
}
class employee extends person{
	Scanner t= new Scanner(System.in);
	int EmpID;
	float salary;
	void display() {
		System.out.println("Enter the Employee ID and salary ");
		EmpID=t.nextInt();
		salary=t.nextFloat();
	}
}
class programmer extends employee{
	double hike=0.1;
	String tech="Java, Python,C";
	void calc() {
		super.printData();
		super.display();
		System.out.println("The name of the person is "+name);
		System.out.println("The age of the person is "+age);
		System.out.println("The address of the person is "+address);
		System.out.println("The employee id of the person is "+EmpID);
		System.out.println("The salary of the person is "+salary);
		System.out.println("The technical skills are: "+tech);
		System.out.println("The total salary of the employee is "+(salary+(salary*hike)));
	}
}


public class inheritance {

	public static void main(String[] args) {
		programmer p1=new programmer();
		p1.calc();
		programmer p2=new programmer();
		p2.calc();
		programmer p3=new programmer();
		p3.calc();
				
		}
    }
    
    
    
    
    
    package inheritance;

class Employee{
	float salary = 40000;
	void dispSalary()
	{
		System.out.println("The Employee salary is : " +salary);
	}
}

class PermanentEmp extends Employee{
	double hike = 0.5;
	void dispSalary() {
		System.out.println("Hello from PermanentEmp class");
	}
	void incrementSalary() 
	{
		dispSalary();
		super.dispSalary();
		System.out.println("The Permanent Employee incremented salary is :" + (salary+(salary*hike)));
		
	}
}
class TemporaryEmp extends Employee{
	double hike = 0.35;
	void incrementSalary()
	{
		super.dispSalary();
		System.out.println("The Temporary Employee incremented salary is :" + (salary+(salary*hike))); 
	}
	
}
public class Hierarchical{
	public static void main(String args[]) {
		PermanentEmp p =new PermanentEmp(); 
		TemporaryEmp t = new TemporaryEmp();
		p.incrementSalary();
		t.incrementSalary();
	}
}