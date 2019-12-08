import java.util.*;
import java.lang.*;
import java.math.BigInteger;
import java.io.*;
public class B_339{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner scan = new Scanner(System.in);
		int numOfHouses = scan.nextInt();
		int numOfTasks = scan.nextInt();
		long elapsedTime = 0;
		int currentHouse = 1;
		for(int i = 0; i < numOfTasks; i++){
			int nextHouse = scan.nextInt();
			if(nextHouse >= currentHouse)
				elapsedTime += (nextHouse - currentHouse);
			else
				elapsedTime += (nextHouse + numOfHouses - currentHouse);
			currentHouse = nextHouse;
		}
		System.out.println(elapsedTime);
		scan.close();
	}
}