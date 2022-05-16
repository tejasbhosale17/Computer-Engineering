import java.util.Scanner;

public class ReverseDigits {
	public static void Reverse(int a)
	{
		int reminder=0,reverse=0;
		while(a>0)
		{
			reminder=a%10;
			reverse=reverse*10+reminder;
			a=a/10;
		}
		System.out.print(reverse);
	}
	
	public static void main(String [] args)
	{
		Scanner scan = new Scanner(System.in);
		System.out.println("Enter a no: ");
		int n = scan.nextInt();
		Reverse(n);
	}

}
