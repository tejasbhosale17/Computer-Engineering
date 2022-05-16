import java.util.Scanner;

public class welcome 
{
	public static void main (String [] args)
	{
		Scanner keyboardInput = new Scanner(System.in);
		System.out.println("Enter Your Name:");
		String name = keyboardInput.nextLine();
		System.out.println("Hey "+name+"!!");
	}
}
