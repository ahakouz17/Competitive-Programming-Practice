import java.util.Scanner;

public class A_556 {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        scan.nextLine();
        String binaryString = scan.nextLine();
        int onesCount = 0, zerosCount = 0;
        while(--n >= 0){
            if (binaryString.charAt(n) == '0') {
                zerosCount++;
            } else {
                onesCount++;
            }
        }
        System.out.println(Math.abs(zerosCount - onesCount));
    }
}