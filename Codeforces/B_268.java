import java.util.*;
import java.lang.*;
import java.math.BigInteger;
import java.io.*;
public class B_268{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		int i = 0, b = 1, sum = 0;
		while(n >= 1){
			sum += b * n - i;
			i++;
			b++;
			n--;		
		}
		System.out.println(sum);
		scan.close();
	}
}