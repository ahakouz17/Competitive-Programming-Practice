// solved: 2014-03-06 21:47:25
import java.util.Scanner;

public class A_133 {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        String s = cin.nextLine();
        boolean f = false;
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == 'H' || s.charAt(i) == 'Q' || s.charAt(i) == '9') {
                System.out.println("YES");
                f = true;
                break;
            }
        }
        if (!f) {
            System.out.println("NO");
        }
        cin.close();
    }
}