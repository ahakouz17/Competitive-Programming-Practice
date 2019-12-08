import java.util.*;


import java.lang.*;
import java.math.BigInteger;
import java.io.*;
public class A_584{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		int t = scan.nextInt();
		String num = Integer.toString(t);
		int i = 1;
		if(t == 10)
			i++;
		for( ; i < n; i++)
			num += "0";
		if(t == 10 && n == 1)
			System.out.println(-1);
		else
			System.out.println(num);	
		scan.close();
	}
}