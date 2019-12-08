import java.util.*;
import java.lang.*;
import java.io.*;
public class A_228{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner scan = new Scanner(System.in);
		int a, b, c, d, distinct = 1;
		a = scan.nextInt();
		b = scan.nextInt();
		c = scan.nextInt();
		d = scan.nextInt();
		if(a != b && a != c && a != d)
			distinct++;
		if(b != c && b != d)
			distinct++;
		if(c != d)
			distinct++;
		System.out.println(4 - distinct);
		scan.close();
	}
}