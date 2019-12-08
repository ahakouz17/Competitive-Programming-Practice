/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
public class A_266
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		String stones = scan.nextLine();
		stones = scan.nextLine();
		char temp = stones.charAt(0);
		int taken = 0;
		for(int i = 1; i < n; i++){
			if(stones.charAt(i) == temp){
				taken++;
			}
			else{
				temp = stones.charAt(i);
			}
		}
        System.out.println(taken);
        scan.close();
	}
}