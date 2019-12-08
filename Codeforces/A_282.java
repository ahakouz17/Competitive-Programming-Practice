import java.util.*;

public class A_282 {
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		int x = 0;
		String s;
		s = scan.nextLine();
		for(int i = 0; i < n; i++){
			s = scan.nextLine();
			if(s.charAt(1) == '+')
				x++;
			else
				x--;
		}
		System.out.println(x);
		scan.close();
	}
}