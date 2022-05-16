import java.util.ArrayList;

public class ArrayListEx {
	private static void disp(ArrayList<Integer> a1)
	{
		for(Integer ele: a1)
		{
			System.out.print(ele+" ");
		}
	}
	public static void main(String[] args)
	{
		ArrayList<Integer> a1= new ArrayList<>();
		a1.add(10);
		a1.add(20);
		a1.add(30);
		a1.add(40);
		a1.add(50);
		disp(a1);
		System.out.println("");
		a1.remove(2);
		disp(a1);
		System.out.println("");
		int pos=a1.indexOf(40);
		System.out.println(pos);
	}
	
}
