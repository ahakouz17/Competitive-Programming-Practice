import java.util.Scanner;

public class B_622 {

    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        
        String time = scan.nextLine();
        int a = scan.nextInt();
        
        int hours, minutes;
        
        hours = Integer.parseInt(time.substring((time.charAt(0) == '0'? 1 : 0) , 2));
        minutes = Integer.parseInt(time.substring((time.charAt(3) == '0'? 4 : 3) , 5));
        a += minutes;
        hours = (hours + (a / 60)) % 24;
        minutes = a % 60;
        
        System.out.println((hours < 10 ? "0" : "") + hours + ":" + (minutes < 10 ? "0" : "" ) + minutes);
    }
}