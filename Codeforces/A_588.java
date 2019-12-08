import java.util.*;
import java.lang.*;
import java.math.BigInteger;
import java.io.*;
public class A_588{
	public static long dist(int a, int b){
		return (long) Math.abs(b - a);
	}
	public static void main (String[] args) throws java.lang.Exception{
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		int price = 0;
		int tempPrice, tempQuan;
		tempQuan = scan.nextInt();
		int mini = scan.nextInt();
		for(int i = 0; i < n; i++){
			if(i != 0){
				tempQuan = scan.nextInt();
				tempPrice = scan.nextInt();
				mini = Math.min(mini, tempPrice);
				}
			price += tempQuan * mini;
		}
		System.out.println(price);
		scan.close();
	}
}