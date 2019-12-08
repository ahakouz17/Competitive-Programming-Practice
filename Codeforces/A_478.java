import java.util.*;
import java.lang.*;
import java.math.BigInteger;
import java.io.*;
public class A_478{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner scan = new Scanner(System.in);
		int sum = 0;
		for(int i = 0; i < 5; i++){
			int temp = scan.nextInt();
			sum += temp;
		}
		if(sum % 5 == 0 && sum != 0){
			System.out.println(sum / 5);
		}
		else{
			System.out.println(-1);
		}
		
		scan.close();
	}
}