import java.util.*;
import java.lang.*;
import java.io.*;
public class A_344{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		int groups = 1;
		String prevTemp, currentTemp;
		String d = scan.nextLine();
		prevTemp = scan.nextLine();
		for(int i = 1; i < n; i++){
			currentTemp = scan.nextLine();
			if(!currentTemp.equals(prevTemp))
				groups++;
			prevTemp = String.copyValueOf(currentTemp.toCharArray());
		//	prevTemp = new String(currentTemp);
			//prevTemp = currentTemp;
		}
		System.out.println(groups);
		scan.close();
	}
}