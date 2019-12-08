import java.util.*;
import static java.lang.Math.*;
public class A_231{
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		int p1, p2, p3;
		int n, implement = 0;
		n = scan.nextInt();
		for(int i = 0; i < n; i++){
			p1 = scan.nextInt();
			p2 = scan.nextInt();
			p3 = scan.nextInt();
			if(p1 + p2 + p3 >= 2){
				implement++;
			}
		}
        System.out.println(implement);
        scan.close();
	}	
}