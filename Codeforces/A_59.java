import java.util.*;
import java.lang.*;
import java.math.BigInteger;
import java.io.*;
public class A_59{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner scan = new Scanner(System.in);
		String word = scan.nextLine();
		int up = 0, lower = 0;
		for(int i = 0; i < word.length(); i++){
			if(Character.isUpperCase(word.charAt(i)))
				up++;
			else
				lower++;
			
		}
		if(up > lower){
			System.out.println(word.toUpperCase());
		}
		else
			System.out.println(word.toLowerCase());
		scan.close();
	}
}