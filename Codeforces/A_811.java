import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
public class A_811 {
    public static void main (String[] args) throws java.lang.Exception
    {
        Scanner scan = new Scanner(System.in);
        int a = scan.nextInt();
        int b = scan.nextInt();
        
        int odd = -1;
        int even = -2;
        
        while(true){
            a += odd;
            if (a < 0) {
                System.out.println("Vladik");
                break;
            }
            b += even;
            if (b < 0) {
                System.out.println("Valera");
                break;
            }
            odd -= 2;
            even -= 2;
        }
    }
}
 