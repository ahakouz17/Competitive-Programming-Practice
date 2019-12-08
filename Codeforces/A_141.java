import java.util.*;


import java.lang.*;
import java.math.BigInteger;
import java.io.*;
public class A_141{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner scan = new Scanner(System.in);
		String guest = scan.nextLine();
		String host = scan.nextLine();
		String pile = scan.nextLine();
		int[] pileLet = new int[26];
		int[] namesLet = new int[26];
		Arrays.fill(pileLet, 0);
		Arrays.fill(namesLet, 0);
		host += guest;
		for(char c : host.toCharArray()){
			namesLet[Character.getNumericValue(c) - Character.getNumericValue('A')]++;
		}
		for(char c : pile.toCharArray()){
			pileLet[Character.getNumericValue(c) - Character.getNumericValue('A')]++;
		}
		if(Arrays.toString(namesLet).equals(Arrays.toString(pileLet)))
			System.out.println("YES");
		else
			System.out.println("NO");
		scan.close();
	}
}