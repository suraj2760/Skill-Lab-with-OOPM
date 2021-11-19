package inheritance;
import java.util.*;

abstract class Shape{
	int length,breadth,radius;
	Scanner input = new Scanner(System.in);
	abstract void printArea();
}

class Rectangle extends Shape{
	void printArea() {
		System.out.println("For finding the Area of Rectangle");
		System.out.print("Enter length and breadth");
		length = input.nextInt();
		breadth = input.nextInt();
		System.out.println("The area of Rectangle is: " + length * breadth);
		
	}
}

class Triangle extends Shape{
	void printArea() {
		System.out.println("For finding the Area of Triangle");
		System.out.println("Enter Base and Height:");
		 length = input.nextInt();
		 breadth = input.nextInt();
		 System.out.println("The area of Triangle is: " + (length * breadth) / 2);
	}
}
class Cricle extends Shape {
	void printArea() {
		System.out.println( "For finding the Area of Cricle");
		System.out.print("Enter Radius: ");
		radius = input.nextInt();
		System.out.println("The area of Cricle is: " + 3.14f * radius * radius);
	}
}
public class abstractshape {
	public static void main(String[] args) {
		Shape rec = new Rectangle();
		rec.printArea();

		Shape tri = new Triangle();
		tri.printArea();
		
		Shape cri = new Cricle();
		cri.printArea();
	}
}


