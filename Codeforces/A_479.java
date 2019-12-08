import java.util.*;
import java.lang.*;
import java.io.*;
public class A_479{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner scan = new Scanner(System.in);
		int a = scan.nextInt();
		int b = scan.nextInt();
		int c = scan.nextInt();
		int maxi;
		maxi = Math.max(a * b + c, Math.max(a + b * c, Math.max(a*(b+c), Math.max(a * b * c, Math.max(a + b + c,(a+b)*c)))));
		System.out.print(maxi);
		scan.close();
	}
}