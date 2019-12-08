import java.util.ArrayList;
import java.util.Scanner;

public class A_579 {
    
    private static ArrayList<Long> powersOfTwo = new ArrayList<Long>();
    private static final long MAX_INPUT = 1000000001;
    
    public static void main(String[] args){
        calculatePowersOfTwo();
        
        Scanner scan = new Scanner(System.in);
        long x = scan.nextLong();
        
        int numOfBecteria = 0;
        int index = powersOfTwo.size();
        while (x >= 1) {
            while (powersOfTwo.get(--index) > x){}
            if (powersOfTwo.get(index) == x){
                numOfBecteria++;
                break;
            } else {
                x = x - powersOfTwo.get(index);
                numOfBecteria++; 
            }
        }
        System.out.println(numOfBecteria);
    }
    
    public static void calculatePowersOfTwo(){
        long num = 1;
        while(num < MAX_INPUT){
            powersOfTwo.add(num);
            num *= 2;
        }
    }
}