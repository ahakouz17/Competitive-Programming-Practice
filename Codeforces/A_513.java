import java.util.*;
import java.lang.*;
import java.math.BigInteger;
import java.io.*;
public class A_513{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner scan = new Scanner(System.in);
		int n1 = scan.nextInt();
		int n2 = scan.nextInt();
		if(n1 > n2){
			System.out.println("First");
		}
		else{
			System.out.println("Second");
		}
		scan.close();
	}
}