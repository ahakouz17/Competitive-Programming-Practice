/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
public class A_41{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner scan = new Scanner(System.in);
		String s1 = scan.nextLine();
		String s2 = scan.nextLine();
		s2 = new StringBuilder(s2).reverse().toString();
		if(s1.equals(s2)){
			System.out.println("YES");
		}
		else
			System.out.println("NO");
	}
}