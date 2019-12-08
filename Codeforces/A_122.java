import java.util.*;

public class A_122 {
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		boolean lucky = false;
		int[] arr = {4, 7, 47, 74, 44, 77, 444, 447, 474, 477, 744, 747, 774, 777};
		for(int i = 0; i < arr.length; i++){
			if(n % arr[i] == 0){
				System.out.println("YES");
				lucky = true;
				break;
			}
		}
		if(!lucky)
            System.out.println("NO");
        scan.close();
	}
}