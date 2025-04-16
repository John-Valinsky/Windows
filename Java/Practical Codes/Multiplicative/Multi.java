// Program to generate the Multiplication Tables
import java.util.*;
class Tables
{
	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		System.out.print("Table Range Start from:");
		int m=scan.nextInt();

		Scanner scan1 = new Scanner(System.in);
		System.out.print("Table End to: ");
		int n=scan1.nextInt();
		if(m<n)
		{
			for(int j=m; j<=n; j++)
			{
				System.out.println("Multiplicaiton table of "+j+" is\n");
				for(int i=1; i<=10; i++)
				{
					System.out.println(j+"*"+i+"="+j*i);
				}
			}
		}
		else
		{
			System.out.println("Multiplicaiton table not possible");
		}
	}
}