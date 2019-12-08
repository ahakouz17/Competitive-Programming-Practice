// solved: 2014-03-06 21:47:50
import java.util.*;

public class A_136 {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        int n = cin.nextInt();
        int a, i;
        Vector<Integer> v = new Vector<Integer>(n);
        for (int j = 0; j < n; j++)
            v.add(0);
        for (i = 1; i <= n; i++) {
            a = cin.nextInt();
            v.set(a - 1, i);
        }
        for (int g = 0; g < n; g++) {
            System.out.print(v.elementAt(g) + " ");
        }
        cin.close();
    }
}