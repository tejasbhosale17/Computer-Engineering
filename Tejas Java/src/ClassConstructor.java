import java.util.Scanner;

public class ClassConstructor {
	public static void main(String [] args)
	{
		
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter no of employees:");
		int n= sc.nextInt();
		Empolyee[] e = new Empolyee[n];
		for(int i=0;i<n;i++)
		{
			System.out.println("Enter enumber,ename,esal:");
			e[i]= new Empolyee(sc.nextInt(),sc.next(),sc.nextFloat());
		}
		System.out.println("All "+n+" Employee Details are:");
		for(int i=0;i<n;i++)
		{
			e[i].displayEmp();
		}
	}

}
