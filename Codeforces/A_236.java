import java.util.*;
public class A_236 {
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		String name = scan.nextLine();
		int distinctLett = 0;
		boolean[] letters = new boolean[100];
		Arrays.fill(letters, false);
		for(int i = 0; i < name.length(); i++){
			int index = Character.getNumericValue(name.charAt(i));
			if(!letters[index]){
				letters[index] = true;
				distinctLett ++;
			}
		}
		if(distinctLett % 2 == 0)
			System.out.println("CHAT WITH HER!");
		else
			System.out.println("IGNORE HIM!");
		scan.close();
		
	}
}