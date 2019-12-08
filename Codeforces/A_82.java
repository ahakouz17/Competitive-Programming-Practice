/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
public class A_82
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		int powerOfTwo = 1;
		String[] initQueue = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
	//	int i = 0;
		if(n <= 5)
			n--;
		while(n > powerOfTwo * 5){
			n -= (powerOfTwo * 5);
			powerOfTwo *= 2;
		}
		n = n / (powerOfTwo);
		System.out.println(initQueue[n]);
		
	}
	
}