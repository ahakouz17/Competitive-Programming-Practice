import java.util.*;


import java.lang.*;
import java.math.BigInteger;
import java.io.*;
public class A_25{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		List<Integer> evenIndices = new Vector<Integer>();
		List<Integer> oddIndices = new Vector<Integer>();
		for(int i = 1; i <= n; i++){
			int temp = scan.nextInt();
			if(temp % 2 == 0)
				evenIndices.add(i);
			else
				oddIndices.add(i);
		}
		if(evenIndices.size() == 1)
			System.out.println(evenIndices.get(0));
		else
			System.out.println(oddIndices.get(0));
		scan.close();
	}
}