import java.util.Scanner;
class Fibonacci
{
		public static void main(String[] args)
		{
			Scanner scan=new Scanner(System.in);
			int i,a=0,b=1,c=0,t;
			
			System.out.print("Enter the value of t:");
			t=scan.nextInt();
			
			System.out.print("\nThe first " +t+ " "+ "Fibonacci Series are: \n\n");

			System.out.print(a);
			
			System.out.print(" "+b);
			
			for(i=0; i<t-2; i++)
			{
			
				c=a+b;
				a=b;
				b=c;
			
				System.out.print(" "+c);
			}
			
			System.out.println();
		}
}