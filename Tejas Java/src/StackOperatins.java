
public class StackOperatins {
	
		private static void lenghtofString(String str) {
			str = null;
			try
			{
			System.out.println(str.length());
			}catch(NullPointerException e)
			{
				System.out.println("given string is null");
			}
			
		}
		
		
	public static void main(String[] args) 
	{

		String str = "Welcome";
		
		lenghtofString(str);
		
		System.out.println("ended main");
		
	}

	
}
