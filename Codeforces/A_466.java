import java.util.*;
import java.lang.*;
import java.math.BigInteger;
import java.io.*;
public class A_466{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		int m = scan.nextInt();
		int a = scan.nextInt();
		int b = scan.nextInt();
		int price;
		if(b/m < a){
			int t = b * (n / m);
			if(n%m != 0)
				t += b;
			price = Math.min(b * (n / m) + a * (n % m), t);
		}
		else
			price = a * n;
		System.out.println(price);
		scan.close();
	}
}