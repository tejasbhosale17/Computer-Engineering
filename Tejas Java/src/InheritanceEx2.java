class A
{
	int i;
	
	A(int i)
	{
		this.i=i;
	}
	
	void m1()
	{
		System.out.println("Class A and value of i is: "+i);
	}
	
}
class B extends A
{
	int j;
	
	B(int i,int j)
	{
		super(i);
		this.j=j;
	}
	
	void m2()
	{
		m1();
		System.out.println("Class B and value of j is: "+j);
	}
	
}
public class InheritanceEx2 
{
	public static void main(String[] args)
	{
		B b =new B(10,20); 
		//b.m1();
		b.m2();
	}
}
