import java.util.*;
import java.lang.*;
import java.io.*;
public class A_443{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner scan = new Scanner(System.in);
		String s = scan.nextLine();
		boolean[] vis = new boolean[200];
		Arrays.fill(vis, false);
		int distinct = 0;
		for(int i = 1; i < s.length(); i+=3){
			if(s.charAt(i) == '}')
				break;
			int num = Character.getNumericValue(s.charAt(i));
			if(!vis[num]){
				vis[num] = true;
				distinct++;
			}
		}
		System.out.println(distinct);
		scan.close();
	}
}