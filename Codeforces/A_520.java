import java.util.*;
import java.lang.*;
import java.math.BigInteger;
import java.io.*;
public class A_520{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		String s = scan.nextLine();
		char[] str = (scan.nextLine()).toLowerCase().toCharArray();
		boolean[] vis = new boolean[26];
		Arrays.fill(vis, false);
		int lett = 0;
		for(char c : str){
			int temp = Character.getNumericValue(c)-Character.getNumericValue('a');
			if(!vis[temp]){
				vis[temp] = true;
				lett++;
			}
		}
		if(lett == 26)
			System.out.println("YES");
		else
			System.out.println("NO");
		scan.close();
	}
}