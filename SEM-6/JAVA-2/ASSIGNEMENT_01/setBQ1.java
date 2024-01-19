import java.io.*;
import java.util.TreeSet;
import java.util.Scanner;
class Sort{
      public static void main(String args[])
      {

             Scanner sc = new Scanner(System.in);
             
             TreeSet<Integer> Number = new TreeSet<>();
             System.out.println("Enter the Number of Integer : ");
             int n = sc.nextInt();

             System.out.println("Enter the Interger : ");
             
             for (int i=0;i<n;i++)
             {
                 Number.add(sc.nextInt());
             }
             System.out.println("Numbers Are : ");
             System.out.println(" "+Number+" \n");
             
             
             System.out.println("Sorted Numbers Are : ");
             System.out.println(" "+Number+" \n");
             
      }
}
