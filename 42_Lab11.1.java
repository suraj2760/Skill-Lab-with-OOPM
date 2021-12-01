/*Write a program in java if a number is less than 0 and greater than 10 it 
generates the user-defined exception "out of range". Else it displays the square
of the number.*/

package javaprogramming3;

import java.util.Scanner;


@SuppressWarnings({ "serial", "unused" })
class outofRangeException extends Exception{
	String display;
	public outofRangeException( String display) {
		this.display=display;
	}
	
}

public class Lab11_1 {
	public static void main(String[] args)  {
		Scanner in= new Scanner(System.in);
		{
			try {
			int num1 = 0;
			System.out.println("Enter any number: ");
		    num1=in.nextInt();
		  
			if(num1<0|| num1>10)
			throw new outofRangeException ("Enter a number between the valid range which is  from 0 to 10");
			{
			int num2=num1*num1;
			System.out.println("Square of " +num1+ " is " +num2);
			}
			}
			catch(Exception xyz) {
			System.out.println(xyz);
			System.out.println("Out of Range!");
			}
			}

		
	}
	}

