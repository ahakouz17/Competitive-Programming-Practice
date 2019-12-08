import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
public class A_337{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner scan = new Scanner(System.in);
		int n, m, temp;
		n = scan.nextInt();
		m = scan.nextInt();
		List<Integer> puzzles = new Vector<Integer>();
		for(int i = 0; i < m; i++){
			temp = scan.nextInt();
			puzzles.add(temp);
		}
		Collections.sort(puzzles);
		int indexA = 0; 
		int indexB = n-1;
		int A, B = 0;
		int minDiff = 1000;
		while(indexB < m){
			A = puzzles.get(indexA++);
			B = puzzles.get(indexB++);
			minDiff = Math.min(B - A, minDiff);
			//System.out.println(A+" " + B + " " + indexB + " "+minDiff);
		}
		System.out.println(minDiff);
	}
}