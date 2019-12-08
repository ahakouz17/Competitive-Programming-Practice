import java.util.*;

public class A_112 {
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		String s1, s2;
		s1 = (scan.nextLine()).toLowerCase();
		s2 = (scan.nextLine()).toLowerCase();
		if(s1.equals(s2))
			System.out.println(0);
		else if (s1.compareTo(s2) > 0)
			System.out.println(1);
		else
            System.out.println(-1);	
        scan.close();
	}
}