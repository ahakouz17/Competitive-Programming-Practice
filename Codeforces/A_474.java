import java.util.*;
import java.lang.*;
import java.math.BigInteger;
import java.io.*;
public class A_474{
	static class key{
		public char right;
		public char left;
		public key(char l, char r){
			right = r;
			left = l;
		}
	}
	public static void main (String[] args) throws java.lang.Exception{
		Scanner scan = new Scanner(System.in);
		String shift = scan.nextLine();
		key[] letters = new key[150];
		String k1 = "oqwertyuiopasdfghjkl;zxcvbnm,./o";
		for(int i = 1; i < k1.length()-1; i++){
			key temp = new key(k1.charAt(i - 1), k1.charAt(i + 1));
			letters[(int)k1.charAt(i)] = temp;
			//System.out.println(temp.right + " , " + k1.charAt(i) + " , " + temp.left);
		}
		String sentence = scan.nextLine();
		for(int i = 0 ; i < sentence.length(); i++){
			int num = (int) sentence.charAt(i);
			
			if(shift.equals("R"))
				System.out.print(letters[num].left);
			else
				System.out.print(letters[num].right);
		}
		scan.close();
	}
}