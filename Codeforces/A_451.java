import java.util.*;
import java.lang.*;
import java.io.*;
public class A_451{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		int m = scan.nextInt();
		int mini = Math.min(n, m);
		if(mini % 2 == 0){
			System.out.println("Malvika");
		}
		else{
			System.out.println("Akshat");
		}
		scan.close();
	}
}