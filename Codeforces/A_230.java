import java.util.*;
import java.lang.*;
import java.math.BigInteger;
import java.io.*;
public class A_230{
	static class Pair implements Comparable<Pair> {
	    public int score;
	    public int bonus;
	    Pair(int s, int b){
	    	this.score = s;
	    	this.bonus = b;
	    }
	    public int compareTo(Pair o){
	    	if(this.score != o.score){
	    		return Integer.compare(this.score, o.score);
	    	}
	    	if(this.bonus != o.bonus){
	    		return Integer.compare(this.bonus, o.bonus);
	    	}
	    	return 0;
	    }
	}
	public static void main (String[] args) throws java.lang.Exception{
		Scanner scan = new Scanner(System.in);
		int initScore = scan.nextInt();
		int dragonNo = scan.nextInt();
		int dragonStrength, bonusScore;
		List<Pair> levels = new Vector<Pair>();
		for(int i = 0; i < dragonNo; i++){
			dragonStrength = scan.nextInt();
			bonusScore = scan.nextInt();
			Pair temp = new Pair(dragonStrength, bonusScore);
			levels.add(temp);
		}
		Collections.sort(levels);
		for(int i = 0; i < dragonNo; i++){
			if(levels.get(i).score < initScore){
				initScore += levels.get(i).bonus;
			}
			else{
				System.out.println("NO");
				return;
			}
		}
		System.out.println("YES");
		scan.close();
	}
}