import java.util.*;

public class A_339 {
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		String sum;
		int ones = 0, twos = 0, threes = 0;
		sum = scan.nextLine();
		for(int i = 0; i < sum.length(); i+=2){
			if(sum.charAt(i) == '1')
				ones++;
			else if (sum.charAt(i) == '2')
				twos++;
			else
				threes++;
		}
		String modSum = "";
		while(ones != 0){
			modSum = modSum + '1';
			if(ones != 1)
				modSum = modSum + '+';
			ones--;
		}	
		if (modSum.length()!= 0 && twos != 0)
			modSum = modSum + '+';
		while(twos != 0){
		
			modSum = modSum + '2';
			if(twos != 1)
				modSum = modSum + '+';
			twos--;
		}			
		if (modSum.length()!= 0 && threes != 0)
			modSum = modSum + '+';
		while(threes != 0){
			modSum = modSum + '3';
			if(threes != 1)
				modSum = modSum + '+';
			threes--;
		}
        System.out.println(modSum);
        scan.close();
	}
}