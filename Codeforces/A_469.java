import java.util.*;
import java.lang.*;
import java.io.*;
public class A_469{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		boolean[] passed = new boolean[n + 1];
		Arrays.fill(passed, false);
		int p, q, temp, levelPassed = 0;
		p = scan.nextInt();
		for(int i = 0; i < p; i++){
			temp = scan.nextInt();
			if(!passed[temp]){
				passed[temp] = true;
				levelPassed ++;
			}
		}
		q = scan.nextInt();
		for(int i = 0; i < q; i++){
			temp = scan.nextInt();
			if(!passed[temp]){
				passed[temp] = true;
				levelPassed ++;
			}
		}
		if(levelPassed == n){
			System.out.println("I become the guy.");
		}
		else{
			System.out.println("Oh, my keyboard!");
		}
		scan.close();
	}
}