import java.util.*;
import java.lang.*;
import java.math.BigInteger;
import java.io.*;
public class A_509{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner scan = new Scanner(System.in);
		long n = scan.nextLong();
		long NChooseK = 1;
		long num = 2 * (n - 1);
		long denum1UP = num / 2;
		long denum2UP = num - denum1UP;
		long denum1 = 1;
		//long denum2 = 1;
		//System.out.println(denum1UP + " " + denum2UP + " " + num);
		while(num > denum2UP){
			if(num > denum2UP){
				NChooseK *= num;
				num--;
			}
		//	System.out.println(num +1  + " " + NChooseK);
			if(denum1 <= denum1UP){
				NChooseK /= denum1;
				denum1++;
			}
		//	System.out.println(denum1-1 + " " + NChooseK);
		//	System.out.println("--------------------");
		}
		System.out.println(NChooseK);
		// read n then calculate  2* (n-1) chose n/2
		scan.close();
	}
}