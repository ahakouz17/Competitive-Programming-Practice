import java.util.*;
public
class A_104
{
public
    static void main(String[] args)
    {
        Scanner cin = new Scanner(System.in);
        int n = cin.nextInt();
        if (n <= 10 || n >= 22)
        {
            System.out.print(0);
        }
        else if (n == 20)
        {
            System.out.print(15);
        }
        else
        {
            System.out.print(4);
		}
		cin.close();
    }
}