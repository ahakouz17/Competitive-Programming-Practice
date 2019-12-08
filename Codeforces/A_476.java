import java.util.*;
import java.lang.*;
import java.math.BigInteger;
import java.io.*;
public class A_476{
	public static long dist(int a, int b){
		return (long) Math.abs(b - a);
	}
	public static void main (String[] args) throws java.lang.Exception{
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		int m = scan.nextInt();
		int steps = (int)Math.ceil(n / 2.0);
		if(n < m){
			System.out.println(-1);
		}
		else{
			while(steps % m != 0){
				steps++;
			}
			if(steps <= n){
				System.out.println(steps);	
			}
			else{
				System.out.println(-1);
			}
		}
		scan.close();
	}
}