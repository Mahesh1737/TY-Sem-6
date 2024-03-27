import java.sql.*;

class setAQ2
{
   public static void main(String args[])
   {
      ResultSet rs=null;
      Connection con=null;
      try
      {
         con=DriverManager.getConnection("jdbc:postgresql://192.168.1.254/ty28","ty28","ty28");
         DatabaseMetaData dbmd=con.getMetaData();
         System.out.println("Database product name="+dbmd.getDatabaseProductName());
         System.out.println("User name="+dbmd.getUserName());
         System.out.println("Database driver name="+dbmd.getDriverName());
         System.out.println("Database driver version="+dbmd.getDriverVersion());
         System.out.println("Database version="+dbmd.getDriverMajorVersion());
         rs=dbmd.getTables(null,null,null,new String[]{"TABLE"});
         System.out.println("List of tables...");
         while(rs.next())
         {
            String tblName=rs.getString("TABLE_NAME");
            System.out.println("Table:"+tblName);
         }
         rs.close();
         con.close();
         
      }
      catch(SQLException e)
      {
         System.out.println("Error"+e.getMessage());
      }
   }
}
/*
Output
ty23@pc20:~/JAVA2/Assignment3$ javac setA2.java
ty23@pc20:~/JAVA2/Assignment3$ java -cp .:/data/jdbc/psql.jar setA2
Database product name=PostgreSQL
User name=ty23
Database driver name=PostgreSQL JDBC Driver
Database driver version=42.5.4
Database version=42
List of tables...
Table:donor
Table:project
ty23@pc20:~/JAVA2/Assignment3$ 

*/



