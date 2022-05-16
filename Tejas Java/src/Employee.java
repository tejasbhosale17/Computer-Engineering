class Employee
{
	int eno;
	String ename;
	float esal;
	
//	public Employee(int eno, String ename, float esal) {
//		this.eno = eno;
//		this.ename = ename;
//		this.esal = esal;
//	}

	public Employee(int eno, String ename, float esal) {
		this.eno = eno;
		this.ename = ename;
		this.esal = esal;
	}

	void displayEmp()
	{
		System.out.println(eno+" "+ename+" "+esal);
	}

}
//public class Employee 
//{
//	int empno;
//	String name;
//	float sal;
//	
//	public Employee(int empno, String name, float sal) 
//	{
//		this.empno = empno;
//		this.name = name;
//		this.sal = sal;
//	}
//
//	void displayEmployee()
//	{
//		System.out.println(empno + name + sal);
//		
//	}
//	@Override
//	public String toString() {
//		return "Employee [empno=" + empno + ", name=" + name + ", sal=" + sal + "]";
//	}
//
//}
