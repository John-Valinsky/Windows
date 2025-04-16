// Program - 7 Static Variable

class Staticmethod
{
	static int i=100;
	static String s="beginner books";
	static void display()
	{
		System.out.println("i:"+i);
		System.out.println("s:"+s);
	}

	void func()
	{
		display();
	}
	
	public static void main(String[] args)
	{
		Staticmethod obj=new Staticmethod();
		obj.func();
		display();
	}
}