import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

public class jdbcExample {
	public static void main(String[] args) throws ClassNotFoundException, SQLException 
	{
		Class.forName("com.mysql.cj.jdbc.Driver");
		
		Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/cdac_practice","root","tejas170299");
		
		ResultSet rs;
		
		System.out.println("connected to Mysql database");
		Statement smt= con.createStatement();
		String q1="select * from emp";
		rs= smt.executeQuery(q1);
		System.out.println("query executed");
		 
		 while(rs.next())
		    {
		    	int empcode = rs.getInt(1);
		    	
		    	System.out.println(empcode+" "+rs.getString(2)+" "+rs.getFloat("basicpay"));
		    	        	
		    }
		 
		 String q2="update emp set basicpay=10000 where empcode=7192";
		 int row=smt.executeUpdate(q2);
		 System.out.println("Query 2 executed Table Updated:");
		 System.out.println("rows affected "+row);
	}
}
