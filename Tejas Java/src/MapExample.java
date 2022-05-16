import java.util.HashMap;
import java.util.Map;

public class MapExample {
public static void main(String[] args)
{
	HashMap<Integer,String> hm = new HashMap<>();
	hm.put(1,"Tejas Bhosale");
	hm.put(2,"Aniruddha Sonawane");
	hm.put(3,"Tanmay Barate");
	hm.put(4,"Swapnil Pawar");
	hm.put(5,"Sanket Rane11");
	
	System.out.println(hm);
	
	for(Map.Entry<Integer,String> m: hm.entrySet())
	{
		System.out.println(m.getKey()+" "+m.getValue());
	}
}
}
