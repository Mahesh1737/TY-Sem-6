import java.io.*;
import java.util.*;

class HashTableSort{
      public static void main(String args[])
      {
             String city;
             Scanner sc = new Scanner(System.in);
             
             HashMap<Integer,String> h = new HashMap<>();
             System.out.println("Enter the Number of Students(key,value) : ");
             int n = sc.nextInt();
         
              System.out.println("Enter the Students(key,value) : ");
             
             for (int i=0;i<n;i++)
             {
                 h.put(sc.nextInt(),sc.next());
             }
             System.out.println("Hash Table is : ");
             System.out.println(" "+h+" \n");
             
             TreeMap<Integer,String> T = new TreeMap<>(h);
             

             System.out.println("Sorted Hash Table is : ");
            
             System.out.println(" "+T+" \n");
             
            
      }
}
