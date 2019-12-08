import java.util.*;
public class A_467 {
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		int p, q;
		int rooms = 0;
		for(int i = 0; i < n ; i++){
			p = scan.nextInt();
			q = scan.nextInt();
			if(q - p >= 2){
				rooms ++;
			}
		}
		System.out.println(rooms);
		scan.close();
	}
}