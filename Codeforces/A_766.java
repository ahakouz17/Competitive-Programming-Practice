import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class A_766 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s1 = in.nextLine();
        String s2 = in.nextLine();
        if(s1.length() == s2.length() && s1.equals(s2)){
            System.out.println(-1);
        } else { 
            System.out.println(Math.max(s1.length(), s2.length()));
        }
            
    }

}