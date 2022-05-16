class Person
{
	int no;
	String name;
	int age;
	Person(int no, String name, int age) {
		super();
		this.no = no;
		this.name = name;
		this.age = age;
	}
	void show()
	{
		System.out.println(no+" "+name+" "+age);
	}
}
class Student extends Person
{
	float marks;
	Student(int no, String name, int age, float marks) {
		super(no, name, age);
		this.marks = marks;
	}
	void DisplayData()
	{
		//show();
		System.out.println(no+" "+name+" "+age+" "+marks);
	}
	
}
public class Inheritance {
	public static void main (String []args)
	{
		Student s =new Student(10,"Tejas",23,90);
		s.DisplayData();
		s.show();
	}
}
