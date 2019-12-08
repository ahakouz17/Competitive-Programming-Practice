import java.util.*;


import java.lang.*;
import java.math.BigInteger;
import java.io.*;
public class A_540{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		String temp = scan.nextLine();
		String initState = scan.nextLine();
		String combination = scan.nextLine();
		int moves = 0;
		for(int i = 0; i < n; i++){
			int a = Integer.parseInt(initState.substring(i, i+1));
			int b = Integer.parseInt(combination.substring(i, i+1));
			int forward = Math.abs(a - b);
			moves = moves + Math.min(forward, 10 - forward);
		}
		System.out.println(moves);
		scan.close();
	}
}