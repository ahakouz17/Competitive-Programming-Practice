/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
public class A_271{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner scan = new Scanner(System.in);
		String year = scan.nextLine();
		int y = Integer.parseInt(year);
		year = Integer.toString(++y);
		char d1, d2, d3, d4;
		while(true){
			d1 = year.charAt(0);
			d2 = year.charAt(1);
			d3 = year.charAt(2);
			d4 = year.charAt(3);
			if(d1 != d2 && d1 != d3 && d1 != d4 && d2 != d3 && d2 != d4 && d3 != d4){
				System.out.println(year);
				break;
			}
			year = Integer.toString(++y);
		}
	}
}