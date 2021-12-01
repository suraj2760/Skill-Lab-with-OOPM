/*Write a program in java to enter the number. If the first and second number
is not entered it will generate the exception. Also, divide the first number 
with the second number and generate the arithmetic exception.*/

package javaprogramming3;

import java.util.Scanner;

public class Lab11_2 {

	public static void main(String[] args) {
		@SuppressWarnings("resource")
		Scanner in= new Scanner(System.in);
		int n1,n2;
		System.out.println("Enter number 1 :");
		n1=in.nextInt();
		System.out.println("Enter number 2 :");
		n2=in.nextInt();
		try
		{
		if(n1==0 && n2==0) {
		throw(new Exception("Please enter non zero numbers"));
		}
		if(n2==0) {
		throw(new Exception("n2 should not be zero as we cannot divide by zero"));
		}
		int n3=n1/n2;
		System.out.println("After Division we get "+n3);
		}
		catch(Exception abc)
		{
		System.out.println(abc);
		}
	}
}