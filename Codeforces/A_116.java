import java.util.*;

public class A_116 {
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		int n, a, b;
		int pass = 0, maxPass = 0;
		n = scan.nextInt();
		
		for(int i = 0; i < n; i++){
			a = scan.nextInt();
			b = scan.nextInt();
			pass = pass - a + b;
			maxPass = Math.max(pass, maxPass);
		}
        System.out.println(maxPass);
        scan.close();
	}
}