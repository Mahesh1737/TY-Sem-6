import java.sql.*;

class setAQ3
{
   public static void main(String args[])
   {
      ResultSet rs=null;
      Connection con=null;
      Statement stm=null;
      try
      {
         con=DriverManager.getConnection("jdbc:postgresql://192.168.1.254/ty28","ty28","ty28");
         stm=con.createStatement();
         rs=stm.executeQuery("Select * from Donor");
         ResultSetMetaData rsmd=rs.getMetaData();
         int n=rsmd.getColumnCount();
         for(int i=1;i<=n;i++)
         {
            System.out.println("Column No:"+i);
            System.out.println("Column Name:"+rsmd.getColumnName(i));
            System.out.println("Column Type:"+rsmd.getColumnTypeName(i));
            System.out.println("Column size:"+rsmd.getColumnDisplaySize(i));
         }
         rs.close();
         stm.close();
         con.close();
      }
      catch(SQLException e)
      {
         System.out.println("Error"+e.getMessage());
      }
   }
}
/*
ty28@pc20:~/JAVA2/Assignment3$ java -cp .:/data/jdbc/psql.jar 
*/


