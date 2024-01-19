import java.io.*;
import java.util.*;

class phone{
      public static void main(String args[])throws IOException
      {
             Scanner sc = new Scanner(System.in);
             
             System.out.println("Enter the File Name : ");
             String fn = sc.next();
         
             File f = new File(fn);
             FileReader fr = new FileReader(f);
             BufferedReader br = new BufferedReader(fr);
                          
             Hashtable<String,String> c = new Hashtable<>();
             
             String line, line1, phone, name, t[];
             
             
             while((line = br.readLine())!=null)
             {
                 t = line.split(" ");
                 
                 c.put(t[0],t[1]);
             }
             
             
             System.out.println("The name and phone Number : "+c+"\n\n");
                     
      }
}
