import java.util.Scanner;
 class Student
{
    Scanner in=new Scanner(System.in);
    String name;
    int rollno;
    String department;
    float cgpa;
    
//method overloading
 void getData()
{
    Scanner t = new Scanner(System.in);
System.out.println("Student name =");
name= t.next();
System.out.println("Student rollno =");
rollno= t.nextInt();
System.out.println("Student department =");
department= t.next();
System.out.println("Student cgpa=");
cgpa= t.nextFloat();
}
 
 void getdata( String n, int r, String d, float c)
 {
	 name=n;
	 rollno=r;
	 department=d;
	 cgpa=c;
 }
 
 void printdata()
 {
	 System.out.println("Student name =" +name);
	 System.out.println("Student rollno =" +rollno);
	 System.out.println("Student department ="+department);
	 System.out.println("Student cgpa ="+cgpa);
 }
};
public class StudentTest
{
public static void main(String args[])
{
Student s1=new Student();
Student s2=new Student();

s1.getData(); //non parameter
s1.printdata();

s2.getdata("ram", 25, "EXTC", (float)9.8 );
s2.printdata();

}
}