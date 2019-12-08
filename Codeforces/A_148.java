import java.util.*;
public class A_148 {
	private static int gcd(int a, int b)
	{
	    while (b > 0)
	    {
	        int temp = b;
	        b = a % b; // % is remainder
	        a = temp;
	    }
	    return a;
	}
	private static int lcm(int a, int b)
	{
	    return a * (b / gcd(a, b));
	}

	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		int k, l, m, n, d, damaged = 0;
		List<Integer> num = new Vector<Integer>();
		List<Integer> numMod = new Vector<Integer>();
		k = scan.nextInt();
		l = scan.nextInt();
		m = scan.nextInt();
		n = scan.nextInt();
		num.add(k);
		num.add(l);
		num.add(m);
		num.add(n);
		Collections.sort(num);
		d = scan.nextInt();
		int temp;
		//boolean f;
		if(k == 1 || m == 1 || l == 1 || n == 1)
			System.out.println(d);
		else{
			for(int i = 0; i < 4; i++){
				temp = num.get(i);
				for(int j = 0; j < i; j++){
					//f = false;
					if(temp % num.get(j) == 0){
						temp = 1;
						continue;
					}	
				}
				if(temp != 1 ){
					damaged += d / temp;
					numMod.add(temp);
				//	System.out.println(temp);
				}
			}
			for(int a = 0; a < numMod.size() - 1; a++){
				for(int b = a+1; b < numMod.size(); b++){
					int LCM = lcm(numMod.get(a),numMod.get(b));
					//System.out.println(LCM);
					damaged -= d/LCM;
				}
			}
			if(numMod.size()>=3){
				for(int a = 0; a < numMod.size() - 2; a++){
					for(int b = a+1; b < numMod.size() - 1; b++){
						for(int c = b+1; c < numMod.size(); c++){
							int LCM = lcm(numMod.get(a),lcm(numMod.get(b),numMod.get(c)));
							//System.out.println(LCM);
							damaged += d/(LCM);
						}
					}
				}
				if(numMod.size()==4){
					int LCM = lcm(numMod.get(0), lcm(numMod.get(1), lcm(numMod.get(2), numMod.get(3))));
					damaged -= d/LCM;
				}
			}
			System.out.println(damaged);
		}
		scan.close();
	}
}