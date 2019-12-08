import java.util.*;
import java.lang.*;
import java.io.*;
public class A_318{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner scan = new Scanner(System.in);
		long n = scan.nextLong();
		long position = scan.nextLong();
		long odd, even;
		if(n % 2 == 0){
			odd = n / 2;
			even = odd;
		}
		else{
			odd = n / 2 + 1;
			even = n / 2;
		}
		if(position <= odd){
			System.out.println(position * 2 - 1);
		}
		else{
			position -= odd;
			System.out.println(position * 2);
		}
		scan.close();
	}
}