import java.util.ArrayList;
import java.util.Scanner;
class Employeewr
{
	int eno;
	String ename;
	float esal;
	
	public Employeewr(int i, String string, float j) {
		// TODO Auto-generated constructor stub
	}

//	public Empolyee(int eno, String ename, i esal) {
//		this.eno = eno;
//		this.ename = ename;
//		this.esal = esal;
//	}

	void displayEmp()
	{
		System.out.println(eno+" "+ename+" "+esal);
	}

}


public class ArrayListwithObject {
	private static ArrayList<Employeewr> addEmployee()
	{
		ArrayList<Employeewr> e = new ArrayList<>();
		Employeewr e1 = new Employeewr(1001,"nsnathan",50000);
		Employeewr e2 = new Employeewr(1002,"siju",70000);
		Employeewr e3 = new Employeewr(1003,"raj",60000);
		Employeewr e4 = new Employeewr(1004,"uma",40000);
		Employeewr e5 = new Employeewr(1005,"Indrani",90000);
		return e;
		
	}
	
	
	public static void main(String[] args)
	{
		ArrayList<Employeewr> e = addEmployee();
	}
}
