import java.util.*;
import java.lang.*;
import java.io.BufferedReader;
import java.io.InputStream;
import java.math.BigInteger;
import java.io.*;
public class A_519{
	public static long dist(int a, int b){
		return (long) Math.abs(b - a);
	}
	public static void main (String[] args) throws java.lang.Exception{
		Scanner scan = new Scanner(System.in);
		int black = 0;
		int white = 0;
		for(int i = 0; i < 8; i++){
			String line = scan.nextLine();
			for(int j = 0; j < line.length(); j++){
				switch (line.charAt(j)){
					case 'q':
						black += 9;
						break;
					case 'Q':
						white += 9;
						break;
					case 'r':
						black += 5;
						break;
					case 'R':
						white += 5;
						break;
					case 'b':
						black += 3;
						break;
					case 'B':
						white += 3;
						break;
					case 'n':
						black += 3;
						break;
					case 'N':
						white += 3;
						break;
					case 'p':
						black ++;
						break;
					case 'P':
						white ++;
						break;	
				}
			}
		}
		if(white > black)
			System.out.println("White");
		else if(white < black)
			System.out.println("Black");
		else
			System.out.println("Draw");
		scan.close();
	}
}