import javax.swing.*;
import java.sql.*;
import javax.swing.table.DefaultTableModel;

class setAQ1
{
   public static void main(String args[])
   {
      Connection con=null;
      Statement  stm=null;
      ResultSet rs=null;
      try
      {
         con=DriverManager.getConnection("jdbc:postgresql://192.168.1.254:5432/ty28","ty28","ty28");
         if (con==null)
         {
             System.out.print("\n error in connection");
           
         }
         
         stm=con.createStatement();
         JFrame frame=new JFrame("Project");
         JTable table=new JTable();
         DefaultTableModel model=new DefaultTableModel(new Object[]{"ID","Name","Description","Status"},0);
         rs=stm.executeQuery("Select * from project");
         while(rs.next())
         {
            int Id=rs.getInt("ID");
            String Name=rs.getString("Name");
            String des=rs.getString("Description");
            String Status=rs.getString("Status");
            model.addRow(new Object[]{Id,Name,des,Status});
         }
         table.setModel(model);
         JScrollPane sp=new JScrollPane(table);
         frame.add(sp);
         frame.pack();
         frame.setVisible(true);
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


