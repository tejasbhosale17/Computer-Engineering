import java.util.Scanner;

class Employee
{
	int empno;
	String empname;
	String edesig;
	float esal;
	
	Employee()
	{
		//this(1001, "Tejas", "comp", 10000);
		System.out.println("Default constructor: ");
	}
	Employee(int empno,String empname,String edesig,float esal)
	{
		this();
		System.out.println("Paramatric constructor: ");
		this.empno=empno;
		this.empname=empname;
		this.edesig=edesig;
		this.esal=esal;
		this.displayData();
	}
	void displayData()
	{
		System.out.println(empno+" "+empname+" "+edesig+" "+esal);
	}
}
public class UseofThis {
	public static void main(String [] args)
	{
		Scanner scan=new Scanner(System.in);
		System.out.println("Enter empno,name,desig,sal: ");
		//Employee e = new Employee();
		Employee e = new Employee(scan.nextInt(),scan.next(),scan.next(),scan.nextFloat());
		//e.getData();
		//e.displayData();
	}
}
