import java.util.*;

public class B_158 {
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		int[] groups = new int[5];
		int temp;
		Arrays.fill(groups, 0);
		for(int i = 0; i < n; i++){
			temp = scan.nextInt();
			groups[temp]++;
		}
		int taxiNum;
		taxiNum = groups[4];
		taxiNum+= groups[3];
		if(groups[1] > 0){
			groups[1] -= groups[3];
			if(groups[1] < 0)
				groups[1] = 0;
		}
		taxiNum += groups[2]/2 + groups[2] % 2 ;
		if(groups[2] % 2 != 0 && groups[1] != 0){
			groups[1] -= 2;
			if(groups[1] < 0)
				groups[1] = 0;
		}
		taxiNum += Math.ceil(groups[1] / 4.0);
		System.out.println(taxiNum);
		scan.close();
	}
}