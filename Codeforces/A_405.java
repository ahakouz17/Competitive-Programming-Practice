import java.util.*;
import java.lang.*;
import java.math.BigInteger;
import java.io.*;
public class A_405{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		List<Integer> box = new Vector<Integer>();
		for(int i = 0; i < n; i++){
			int temp = scan.nextInt();
			box.add(temp);
		}
		Collections.sort(box);
		for(int e : box){
			System.out.print(e + " ");
		}
		scan.close();
	}
}