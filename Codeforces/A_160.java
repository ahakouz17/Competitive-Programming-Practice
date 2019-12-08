import java.util.Scanner;
import java.util.*;

public class A_160 {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        int n = cin.nextInt();
        Vector<Integer> v = new Vector<Integer>(0, 0);
        int h, so = 0, sw = 0, s = 0;
        for (int i = 0; i < n; i++) {
            h = cin.nextInt();
            sw += h;
            v.addElement(h);
        }
        Collections.sort(v);
        for (int i = n - 1; i >= 0; i--) {
            sw -= v.elementAt(i);
            so += v.elementAt(i);
            if (so > sw) {
                s = n - i;
                System.out.print(s);
                break;
            }
        }
        cin.close();
    }
}