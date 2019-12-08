import java.util.*;
import java.lang.*;
import java.math.BigInteger;
import java.io.*;
public class A_581{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner scan = new Scanner(System.in);
		int a = scan.nextInt();
		int b = scan.nextInt();
		int days;
		days = Math.min(a, b);
		System.out.print(days + " ");
		days = (Math.max(a, b) - days) / 2;
		System.out.println(days);
	
		scan.close();
	}
}