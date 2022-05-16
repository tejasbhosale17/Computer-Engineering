abstract class Students
{
	void display()
	{
		System.out.println("this is void display method");
	}
	abstract void show();

}
class Room extends Students
{
	void show()
	{
		System.out.println("this is Room class & show method");
	}
}
public class AbstractClassEx {
	public static void main(String[] args)
	{
		Room s = new Room();
		s.show();
		s.display();
	}
}
