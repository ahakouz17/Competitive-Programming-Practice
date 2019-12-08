/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
public class B_266
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		int t = scan.nextInt();
		String queue = scan.nextLine();
		queue = scan.nextLine();
		char[] queueChar = queue.toCharArray();
		for(int i = 0; i < t; i++){
			for(int j = 0; j < queue.length()-1; j++){
				if(queueChar[j] == 'B' && queueChar[j + 1] == 'G'){
					queueChar[j] = 'G';
					queueChar[j+1] = 'B';
					j++;
				}
			}
		}
		queue = String.valueOf(queueChar); 
		System.out.println(queue);
		
	}
	
}