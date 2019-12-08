import java.util.*;
import java.lang.*;
import java.io.*;
public class A_144{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		int maxHeight = 0, minHeight = 101;
		int[] heights = new int[n];
		for(int i = 0; i < n; i++){
			heights[i] = scan.nextInt();
			minHeight = Math.min(minHeight, heights[i]);
			maxHeight = Math.max(maxHeight, heights[i]);
		}
		int minIndex = n - 1, maxIndex = 0;
		//find the index of the first max from the left and the first min from the right
		while(true){
			if(heights[maxIndex] == maxHeight){
				break;
			}
			maxIndex++;
		}
		while(true){
			if(heights[minIndex] == minHeight){
				break;
			}
			minIndex--;
		}
		int swaps = (n-1)-minIndex + maxIndex;
		if(maxIndex > minIndex)
			swaps--;
		System.out.println(swaps);
		scan.close();
	}
}