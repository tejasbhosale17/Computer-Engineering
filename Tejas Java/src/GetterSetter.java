class Employeeiam
{
	int empno;
	String ename;
	String add;
	public int getEmpno() {
		return empno;
	}
	public void setEmpno(int empno) {
		this.empno = empno;
	}
	public String getEname() {
		return ename;
	}
	public void setEname(String ename) {
		this.ename = ename;
	}
	public String getAdd() {
		return add;
	}
	public void setAdd(String add) {
		this.add = add;
	}
	
	
}
public class GetterSetter {
	public static void main(String[] args)
	{
		Employeeiam e = new Employeeiam();
		e.setEmpno(10);
		e.setEname("Tejas");
		e.setAdd("Dafkj");
		
		System.out.println(e.getEmpno());
		System.out.println(e.getEname());
		System.out.println(e.getAdd());
		
		
	}
}
