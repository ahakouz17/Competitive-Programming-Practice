import java.util.*;
import java.lang.*;
import java.io.*;
public class A_69{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		int xSum = 0, ySum = 0, zSum = 0;
		int temp;
		for(int i = 0; i < n; i++){
			temp = scan.nextInt();
			xSum += temp;
			temp = scan.nextInt();
			ySum += temp;
			temp = scan.nextInt();
			zSum += temp;
		}
		if(xSum == 0 && ySum == 0 && zSum == 0)
			System.out.println("YES");
		else
			System.out.println("NO");
		scan.close();
	}
}