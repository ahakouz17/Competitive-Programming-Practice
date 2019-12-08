import java.util.*;
import java.lang.*;
import java.io.*;
public class A_486{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner scan = new Scanner(System.in);
		long n = scan.nextLong();
		if(n % 2 == 0){
			System.out.println(n / 2);
		}
		else{
			System.out.println((n-1)/2 - n);
		}
		scan.close();
	}
}