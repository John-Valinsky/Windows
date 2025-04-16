class Arithmetic
{
	public static void main(String[] args)
	{
		int a=5,b=6,c=3,d=4,e=2;
		System.out.println("arthmetic operators deministration");

		int m=a+b-c;
		int n=a+b-c*d;
		int o=a+b-c*d+d;
		int p=a+b-c*d+d/a;
		int k=a+b-c*d+d/a%b;
		int l=(a+b-c)*(d+d)/a%b;
		System.out.println("m="+m);
		System.out.println("n="+n);
		System.out.println("n="+n);
		System.out.println("o="+o);
		System.out.println("p="+p);
		System.out.println("default precedence and associativity k="+k);
		System.out.println("overriden precedence and associativity l="+l);
	}
}