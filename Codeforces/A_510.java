import java.util.*;
import java.lang.*;
import java.io.*;
public class A_510{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner scan = new Scanner(System.in);
		int R, C;
		R = scan.nextInt();
		C = scan.nextInt();
		boolean toggle = false;
		for(int r = 0; r < R; r++){
			if(r % 2 == 0){
				char[] arr = new char[C];
				Arrays.fill(arr, '#');
				String str = new String(arr);
				System.out.println(str);
			}
			else{
				char[] arr2 = new char[C];
				Arrays.fill(arr2, '.');
				if(!toggle){
					arr2[C - 1] = '#';
				}
				else{
					arr2[0] = '#';
				}
				String str2 = new String(arr2);
				System.out.println(str2);
				toggle = !toggle;
			}
		}
		scan.close();
	}
}