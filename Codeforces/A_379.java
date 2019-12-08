import java.util.*;
import java.lang.*;
import java.io.*;
public class A_379{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner scan = new Scanner(System.in);
		int a = scan.nextInt();
		int b = scan.nextInt();
		int hours = 0;
		int rem = 0;
		int temp;
		while(a > 0){
			hours += a;
			temp = (a + rem) / b;
			rem = (a + rem) % b;
			a = temp;
		}
		System.out.println(hours);
		scan.close();
	}
}