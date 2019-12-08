import java.util.*;
import java.lang.*;
import java.io.*;
public class A_208{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner scan = new Scanner(System.in);
		String song = scan.nextLine();
		List<String> songWords = new Vector<String>();
		String temp = "";
		for(int i = 0; i < song.length(); i++){
			if(song.charAt(i) != 'W'){
				temp += song.charAt(i);
			//	System.out.println(temp);
			}
			else{
				if(i < song.length()- 2 && song.substring(i,i+3).equals("WUB")){
					if(!temp.equals(""))
						songWords.add(temp);
					temp = "";
					i+=2;
				}
				else{
					temp += song.charAt(i);
				}
			}
		}
		if(!temp.equals(""))
			songWords.add(temp);
		for(String s : songWords){
			System.out.print(s + " ");
		}
		scan.close();
	}
}