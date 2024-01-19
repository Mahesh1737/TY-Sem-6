import java.io.*;
import java.util.*;

class cities{
      public static void main(String args[])
      {
             String city;
             Scanner sc = new Scanner(System.in);
             
             ArrayList<String> cityList = new ArrayList<>();
             System.out.println("Enter the Number of City names : ");
             int n = sc.nextInt();
             /*for (int i=0;i<n;i++)
             {
                 System.out.println("Enter the "+i+1+"City\n");
                 city = sc.next();
                  
             }*/
             
             System.out.println("Enter City names : ");
             
             for (int i=0;i<n;i++)
             {
                 cityList.add(sc.next());
             }
             System.out.println("City names  Are : ");
             System.out.println(" "+cityList+" \n");
             cityList.clear();
             System.out.println("Cleared City names  Are : ");
             System.out.println(" "+cityList+" \n");
             
      }
}
