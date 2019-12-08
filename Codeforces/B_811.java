import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
public class B_811
{
    public static void main (String[] args) throws java.lang.Exception
    {
        Scanner scan = new Scanner(System.in);
        int m = scan.nextInt();
        int n = scan.nextInt();
        
        List<Integer> permutation = new ArrayList<Integer>();
        
        for(int i = 0; i < m ; i++) {
            permutation.add(scan.nextInt());
        }
        
        int from, to, pos;
        for(int i = 0; i < n; i++) {
            from = scan.nextInt();
            to = scan.nextInt();
            pos = scan.nextInt();
            int newPos = from - 1;
            for(int j = from - 1; j < to; j++){
                if(permutation.get(j) < permutation.get(pos-1)){
                    newPos++;
                }
            }
            if(newPos == pos-1){
                System.out.println("Yes");
            } else {
                System.out.println("No");
            }
        }
        
    }
}
 