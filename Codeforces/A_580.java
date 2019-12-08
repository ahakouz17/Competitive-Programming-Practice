import java.util.*;
import java.lang.*;
import java.io.*;
public class A_580{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		int maxSeg = 1;
		int temp = scan.nextInt();
		int newTemp, maxi = 1;
		for(int i = 1; i < n ; i++){
			newTemp = scan.nextInt();
			if(newTemp >= temp){
				maxSeg++;
			}
			else {
				maxi = Math.max(maxi, maxSeg);
				maxSeg = 1;
			}
			temp = newTemp;
		}
		maxi = Math.max(maxi, maxSeg);
		System.out.println(maxi);
		scan.close();
	}
}