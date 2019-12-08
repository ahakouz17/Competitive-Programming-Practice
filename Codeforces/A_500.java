import java.util.*;
import java.lang.*;
import java.io.*;
public class A_500{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		int dest = scan.nextInt();
		int[] steps = new int[n];
		int nextStop = 1;
		for(int i = 1; i < n; i++){
			steps[i] = scan.nextInt();
		}
		String arrive;
		while(true){
			if(nextStop == dest){
				arrive = "YES";
				break;
			}
			if(nextStop >= n){
				arrive = "NO";
				break;
			}
			nextStop += steps[nextStop];
		}
		System.out.println(arrive);
		scan.close();
	}
}