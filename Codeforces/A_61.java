import java.util.*;
import java.lang.*;
import java.io.*;
public class A_61{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner scan = new Scanner(System.in);
		String n1 = scan.nextLine();
		String n2 = scan.nextLine();
		for(int i = 0; i < n1.length(); i++){
			if(n1.charAt(i) == n2.charAt(i))
				System.out.print(0);
			else
				System.out.print(1);
		}
		scan.close();
	}
}