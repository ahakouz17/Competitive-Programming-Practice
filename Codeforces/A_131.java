// solved: 2014-03-06 21:46:36
import java.util.Scanner;

public class A_131 {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        String s = cin.nextLine();
        String nw = "";
        if (s.length() == 1) {
            if (s.charAt(0) >= 97) {
                nw += (char) (s.charAt(0) - 'a' + 'A');
            } else {
                nw += (char) (s.charAt(0) + 'a' - 'A');
            }
        } else if (s.charAt(0) >= 97 && s.charAt(1) < 97) {
            nw += (char) (s.charAt(0) + 'A' - 'a');
            nw += (char) (s.charAt(1) - 'A' + 'a');
            for (int i = 2; i < s.length(); i++) {
                if (s.charAt(i) >= 97) {
                    nw = s;
                    break;
                }
                nw += (char) (s.charAt(i) - 'A' + 'a');
            }
        } else if (s.charAt(0) < 97 && s.charAt(1) < 97) {
            nw += (char) (s.charAt(0) - 'A' + 'a');
            nw += (char) (s.charAt(1) - 'A' + 'a');
            for (int i = 2; i < s.length(); i++) {
                if (s.charAt(i) >= 97) {
                    nw = s;
                    break;
                }
                nw += (char) (s.charAt(i) - 'A' + 'a');
            }
        } else {
            nw = s;
        }
        System.out.println(nw);
        cin.close();
    }
}