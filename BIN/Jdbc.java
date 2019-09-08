import java.sql.*;
import java.util.*;
class Jdbc
{
  void method()
  {
       try {
                Class.forName("com.jdbc.mysql.Driver");
                Connection con=DriverManager.getConnection("jdbc://127.0.0.1:3306/student","root","");
                 Statement s=con.createStatement();
                 int NumberOfRow=s.executeQuery("select * from login2");
                 System.out.println("Total no of row : "+NumberOfRow);
            }
       catch(SQLException e)
            {
               System.out.println(e);
            } 
  }
public static void main(String... k)
   {
       Jdbc obj=new Jdbc();
       obj.method();
   }
}