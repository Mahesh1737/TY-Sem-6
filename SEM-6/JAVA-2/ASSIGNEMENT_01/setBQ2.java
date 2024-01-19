import java.io.*;
import java.util.*;

class HashTableSort{
      public static void main(String args[])
      {
             String city;
             Scanner sc = new Scanner(System.in);
             
             HashMap<Integer,String> c = new HashMap<>();
             System.out.println("Enter the Number of Entry(key,value) : ");
             int n = sc.nextInt();
         
              System.out.println("Enter the Entry(key,value) : ");
             
             for (int i=0;i<n;i++)
             {
                 c.put(sc.nextInt(),sc.next());
             }
             System.out.println("Hash Table is : "+c);
             for (Integer k : c.keySet())
             {
                 System.out.println("Key  : "+k+" Value : "+c.get(k));
             }
             System.out.println("");
             TreeMap<Integer,String> c1 = new TreeMap<Integer, String>();
             c1.putAll(c);
           
             System.out.println("After Hash Table is : "+c1);
             for (Integer k : c1.keySet())
             {
                 System.out.println("Key  : "+k+" Value : "+c1.get(k));
             } 
      }
}
