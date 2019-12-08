import java.util.*;
import java.lang.*;
import java.io.*;
public class A_268{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		List<Integer> hostUni = new Vector<Integer>();
		List<Integer> guestUni = new Vector<Integer>();
		int[] guestOcc = new int[101];
		Arrays.fill(guestOcc, 0);
		int tempHost, tempGuest;
		for(int i = 0; i < n; i++){
			tempHost = scan.nextInt();
			hostUni.add(tempHost);
			tempGuest = scan.nextInt();
			guestOcc[tempGuest]++;
			guestUni.add(tempGuest);
		}
		int exceptions = 0;
		for(int h: hostUni){
			if(guestOcc[h] == 0)
				continue;
			exceptions += guestOcc[h];
		}
		System.out.println(exceptions);
		scan.close();
	}
}