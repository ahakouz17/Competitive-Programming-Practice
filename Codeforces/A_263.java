import java.util.*;
public class A_263 {
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		int temp, oneR = 0, oneC = 0;
		for(int r = 1; r <= 5; r++){
			for(int c = 1; c <= 5; c++){
				temp = scan.nextInt();
				if(temp == 1){
					oneR = r;
					oneC = c;
					break;
				}
			}
			if(oneR != 0)
				break;
		}
		System.out.println(Math.abs(oneR-3) + Math.abs(oneC-3));
		scan.close();
	}
}