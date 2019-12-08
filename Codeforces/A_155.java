import java.util.*;
import java.lang.*;
import java.math.BigInteger;
import java.io.*;
public class A_155{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		int first = scan.nextInt();
		int minScore = first;
		int maxScore = first;
		int amazing = 0;
		for(int i = 0; i < n-1; i++){
			int temp = scan.nextInt();
			if(temp > maxScore){
				maxScore = temp;
				amazing++;
			}
			if(temp < minScore){
				minScore = temp;
				amazing++;
			}
		}
		System.out.println(amazing);
		scan.close();
	}
}