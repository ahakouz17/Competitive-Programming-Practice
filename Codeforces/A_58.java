import java.util.*;
public class A_58 {
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		String chat = scan.nextLine();
		String pattern = ".*[h].*[e].*[l].*[l].*[o].*";
		if(chat.matches(pattern))
			System.out.println("YES");
		else
            System.out.println("NO");
        scan.close();
		
	}
}