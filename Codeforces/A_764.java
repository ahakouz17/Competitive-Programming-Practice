import java.util.Scanner;


public class A_764 {

	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner scan = new Scanner(System.in);
		int n, m, z;
		n = scan.nextInt();
		m = scan.nextInt();
		z = scan.nextInt();
//		System.out.println("n : " + n + " , m: " + m + " , z: " + z + " , GCD(n, m): "+ calculateLCM(n,m));
		System.out.println(z / calculateLCM(n, m));
		
		
	}

	public static int calculateGCD(int a, int b){
		if(b == 0){
			return a;
		} else {
			return calculateGCD(b , a % b); 
		}
	}
	
	public static int calculateLCM(int a, int b) {
		return (a * b) / calculateGCD(a, b);
	}
}