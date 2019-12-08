import java.util.*;
import java.lang.*;
import java.math.BigInteger;
import java.io.*;
public class B_492{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner scan = new Scanner(System.in);
		int numOfLanterns = scan.nextInt();
		int streetLength = scan.nextInt();
		List<Integer> pos = new Vector<Integer>();
		for(int i = 0; i < numOfLanterns; i++){
			int temp = scan.nextInt();
			pos.add(temp);
		}
		//pos.add(0);
		//pos.add(streetLength);
		Collections.sort(pos);
		int maxDiff = 0;
		for(int i = 1; i < pos.size(); i++){
		//	System.out.println(maxDiff);
			maxDiff = Math.max(maxDiff, pos.get(i)- pos.get(i-1));
		}
		maxDiff = Math.max(maxDiff, pos.get(0) * 2);
		maxDiff = Math.max(maxDiff,2* (streetLength - pos.get(pos.size()-1)));
		System.out.println(String.format("%.9f", maxDiff / 2.0));
		scan.close();
	}
}