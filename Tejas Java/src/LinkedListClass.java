import java.util.LinkedList;
import java.util.Scanner;
public class LinkedListClass 
{
	public static  LinkedList<Integer> createll()
	{
		LinkedList<Integer> llist = new LinkedList<>();
		Scanner scan= new Scanner(System.in);
		System.out.println("Enter size of ll:");
		int n =scan.nextInt();
		System.out.println("Enter elements of ll:");
		for(int i=0;i<n;i++)
		{
			llist.add(scan.nextInt());
		}
		return llist;
	}
	
	public static void main(String[] args)
	{
		LinkedList<Integer> ll = createll();
		System.out.println(ll);
		
		for(Integer ele : ll)
		{
			System.out.print(ele+" ");
		}
		System.out.println("");
		ll.pop();
		for(Integer ele : ll)
		{
			System.out.print(ele+" ");
		}
		System.out.println("");
		ll.addLast(100);
		for(Integer ele : ll)
		{
			System.out.print(ele+" ");
		}
		System.out.println("");
		ll.addFirst(200);
		for(Integer ele : ll)
		{
			System.out.print(ele+" ");
		}
		System.out.println("");
	}
	
}
