import java.util.ArrayList;
import java.util.Scanner;

public class B_583 {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        
        int n = scan.nextInt();
        ArrayList<Integer> line = new ArrayList<Integer>();
        
        for(int i = 0; i < n; i++){
            line.add(scan.nextInt());
        }
        
        int index = 0;
        int dirChange = 0;
        boolean ltrDir = true;
        int increament = 1;
        int infoCount = 0;
        
        while(line.size() != 0){
            if (ltrDir) {
                increament = 1;
                index = 0;
            } else {
                increament = -1;
                index = line.size() - 1;
            }
            while ((ltrDir && index < line.size()) || (!ltrDir && index >= 0)){
                int a = line.get(index);
                if (a <= infoCount){
                    infoCount++;
                    line.remove(index);
                    if (ltrDir) {
                        index--;
                    }
                }
                index += increament;
            }
            ltrDir = !ltrDir;
            if (line.size() != 0){
                dirChange++;
            }
        }
        System.out.println(dirChange);
    }
}