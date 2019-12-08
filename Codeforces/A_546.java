import java.util.*;
public class A_546 {
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		long initCost, hasMoney, numBanana;
		initCost = scan.nextInt();
		hasMoney = scan.nextInt();
		numBanana = scan.nextInt();
		long total, borrow;
		total = initCost * (numBanana *(numBanana + 1)) / 2 ;
		borrow = total - hasMoney;
		if(borrow < 0)
			borrow = 0;
		System.out.println(borrow);
		scan.close();
	}
}