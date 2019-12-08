import java.util.*;
import java.lang.*;
import java.math.BigInteger;
import java.io.*;
public class A_567{
	public static long dist(int a, int b){
		return (long) Math.abs(b - a);
	}
	public static void main (String[] args) throws java.lang.Exception{
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		int[] xi = new int[n];
		for(int i = 0; i < n; i++){
			xi[i] = scan.nextInt();
		}
		int rBnd = xi[n - 1];
		int lBnd = xi[0];
		System.out.println(dist(lBnd, xi[1]) + " " + dist(lBnd, rBnd));
		for(int i = 1; i < n - 1; i++){
			long tempR, tempL;
			tempL = dist(xi[i -1], xi[i]);
			tempR = dist(xi[i], xi[i +1]);
			System.out.print(Math.min(tempL, tempR) + " ");
			tempL = dist(lBnd, xi[i]);
			tempR = dist(xi[i], rBnd);
			System.out.println(Math.max(tempL, tempR));
		}
		System.out.println(dist(xi[n-2], rBnd) + " " + dist(lBnd, rBnd));		
		scan.close();
	}
}