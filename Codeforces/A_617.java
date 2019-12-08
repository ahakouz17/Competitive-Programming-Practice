import java.util.*;
import java.lang.*;
import java.math.BigInteger;
import java.io.*;
public class A_617{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner scan = new Scanner(System.in);
		int dist = scan.nextInt();
		System.out.println((int)Math.ceil(dist / 5.0));
		scan.close();
	}
}