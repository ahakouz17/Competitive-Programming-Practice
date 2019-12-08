import java.util.*;
import java.lang.*;
import java.math.BigInteger;
import java.io.*;
public class A_448{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner scan = new Scanner(System.in);
		int numOfCups = scan.nextInt() + scan.nextInt() + scan.nextInt();
		int numOfMedals = scan.nextInt() + scan.nextInt() + scan.nextInt();
		int n = scan.nextInt();
		int numOfReqShelves = (int) Math.ceil(numOfCups / 5.0) + (int) Math.ceil(numOfMedals / 10.0);
		if(numOfReqShelves <= n)
			System.out.println("YES");
		else
			System.out.println("NO");
		scan.close();
	}
}