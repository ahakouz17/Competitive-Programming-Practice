import java.util.*;
import java.lang.*;
import java.io.*;
public class A_119{
	private static int gcd(int a, int b){
	    while (b > 0){
	        int temp = b;
	        b = a % b; // % is remainder
	        a = temp;
	    }
	    return a;
	}	
	public static void main (String[] args) throws java.lang.Exception{
		Scanner scan = new Scanner(System.in);
		int a = scan.nextInt();
		int b = scan.nextInt();
		int n = scan.nextInt();
		int tempGCD;
		while(true){
			tempGCD = gcd(a, n);
			if(n < tempGCD){
				System.out.println("1");
				break;
			}
			n -= tempGCD;
			tempGCD = gcd(b, n);
			if(n < tempGCD){
				System.out.println("0");
				break;
			}
			n -= tempGCD;
		}
		scan.close();
	}
}