/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
public class A_281
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner scan = new Scanner(System.in);
		String word = scan.nextLine();
		System.out.println((word.toUpperCase()).charAt(0) + word.substring(1));
        scan.close();
    }
}