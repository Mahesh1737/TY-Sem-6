import java.io.*;
import java.util.*;

class HashTableA{
      public static void main(String args[])
      {
             String city;
             Scanner sc = new Scanner(System.in);
             
             Hashtable<String,String> h = new Hashtable<>();
             System.out.println("Enter the Number of Students(Contact,Name) : ");
             int n = sc.nextInt();
         
              System.out.println("Enter the Students(Contact,Name) : ");
             
             for (int i=0;i<n;i++)
             {
                 h.put(sc.next(),sc.next());
             }
             System.out.println("Hash Table is : ");
             System.out.println(" "+h+" \n");
            
      }
}
