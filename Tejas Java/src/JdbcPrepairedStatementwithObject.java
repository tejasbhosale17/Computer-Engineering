import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;

import com.mysql.cj.protocol.Resultset;

public class JdbcPrepairedStatementwithObject {
	private static Connection createConnections() throws ClassNotFoundException, SQLException
	{
		ArrayList<Employee> al = new ArrayList<>();
		Class.forName("com.mysql.cj.jdbc.Driver");
		Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/cdac_practice","root","tejas170299");
		ResultSet rs;
		Employee e = new Employee(rs.getInt(2),rs.getString(2),rs.getFloat("basicpay")) ;
    	al.add(e);
		return con;
		
	}
	
	private static void displayAllRecords(Connection con) throws SQLException
	{
		String q1="select * from emp";
		PreparedStatement pmt;
		pmt=con.prepareStatement(q1);
		System.out.println("query executed");
		 ResultSet rs;
		 rs=pmt.executeQuery();
		 while( rs.next())
		    {
		    	int empcode = rs.getInt(1);
		    	
		    	System.out.println(empcode+" "+rs.getString(2)+" "+rs.getFloat("basicpay"));
		    	        	
		    }
	}
	
	private static void ShowSpecific(Connection con)
	{
		
	}
	
	public static void main(String[] args) throws ClassNotFoundException, SQLException 
	{
		Connection con = createConnections();
		displayAllRecords(con);
		
		
	}
}
