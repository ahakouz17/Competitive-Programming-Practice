import java.util.*;
public class A_110 {
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		String s = scan.nextLine();
		int lucky = 0;
		for(int i = 0; i < s.length(); i++){
			if(s.charAt(i) == '4' || s.charAt(i) == '7')
				lucky++;
		}
		String Lucky = Integer.toString(lucky);
		for(int i = 0; i < Lucky.length(); i++){
			if(Lucky.charAt(i) != '4' && Lucky.charAt(i) != '7'){
				System.out.println("NO");
				scan.close();
				return;
			}
		}
		System.out.println("YES");
		scan.close();
	}
}