import java.util.*;
import java.lang.*;
import java.math.BigInteger;
import java.io.*;
public class A_313{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner scan = new Scanner(System.in);
		String accountState = scan.nextLine();
		if(accountState.charAt(0) != '-'){
			System.out.println(accountState);
			scan.close();
			return;
		}
		int l = accountState.length();
		char last = accountState.charAt(l - 1);
		char beforeLast = accountState.charAt(l-2);
		if(Character.getNumericValue(last) >= Character.getNumericValue(beforeLast)){
			System.out.println(accountState.substring(0, l-1));
		}
		else{
			if(last == '0' && accountState.length()==3)
				System.out.println(0);
			else
				System.out.println(accountState.substring(0,l-2) + accountState.substring(l-1));
		}
		scan.close();
	}
}