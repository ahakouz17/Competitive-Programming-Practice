import java.util.*;
public class A_96 {
public static void main(String [] args){
	Scanner cin=new Scanner(System.in);
	String s=cin.nextLine();
	char l;
	int count=0;
	boolean zero=false, one=false, f=false;
	for(int i=0; i<s.length(); i++){
		l=s.charAt(i);
		if(i==0){
			if(l=='1') {one=true; count++;}
			else {zero=true; count++;}
		}
		if(l=='0' && one) {count=1; zero=true; one=false;}
		else if(l=='1' && zero ){count=1; zero=false; one=true;}
		else {count++;}
		if(count>=7) {System.out.println("YES"); f=true; break;}
	}
    if(!f) {System.out.println("NO");}
    cin.close();
}
}