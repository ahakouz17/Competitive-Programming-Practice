import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
public class A_472{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		if(n % 2 == 0)
			System.out.println(4 + " " + (n - 4));
		else
			System.out.println(9 + " " + (n - 9));
		scan.close();
	}
}