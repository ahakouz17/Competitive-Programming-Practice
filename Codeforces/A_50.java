import java.util.*;
import static java.lang.Math.*;
public class A_50{
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		int m, n;
		m = scan.nextInt();
		n = scan.nextInt();
		int tiles;
		tiles = (max(m, n) / 2) * min(m, n) + ( min(m,n) / 2) * (max(m, n) % 2);
		System.out.println(tiles);
        scan.close();
    }	
}