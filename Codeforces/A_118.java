import java.util.*;
public class A_118{
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		String word = scan.nextLine();
		word = word.toLowerCase();
		for(int i = 0; i < word.length(); i++){
			char c = word.charAt(i);
			if(c == 'o' || c == 'a' || c == 'i' || c == 'u' || c == 'y' || c == 'e' )
				continue;
			else
				System.out.print("." + c);
        }
        scan.close();
	}	
}