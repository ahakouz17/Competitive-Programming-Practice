import java.util.*;


import java.lang.*;
import java.math.BigInteger;
import java.io.*;
public class A_492{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		int rowNum = 1, num = 2;
		int height = 0;
		while(n >= rowNum){
			n -= rowNum;
			height ++;
			rowNum = rowNum + num;
			num ++;
		}
		System.out.println(height);
		scan.close();
	}
}