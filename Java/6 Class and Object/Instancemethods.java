// 6 Write a Java program to define class and object.

import java.util.*;
class Instancemethods
{
	private String color;

		String getColor()
		{
			return color;
		}
		void setColor(String c)
		{
			this.color=c;
		}
		public static void main(String[] args)
		{
			Instancemethods im=new Instancemethods();
			Scanner scan=new Scanner(System.in);
			System.out.print("Enter the color:");
			String m=scan.next();
			im.setColor(m);
			System.out.println(im.getColor());
		}
}