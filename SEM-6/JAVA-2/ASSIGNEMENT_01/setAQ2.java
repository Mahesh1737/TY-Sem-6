import java.io.*;
import java.util.*;

class Friend{
      public static void main(String args[])
      {
             String city;
             Scanner sc = new Scanner(System.in);
             
             LinkedList<String> FriendList = new LinkedList<>();
             System.out.println("Enter the Number of Friends : ");
             int n = sc.nextInt();
             /*for (int i=0;i<n;i++)
             {
                 System.out.println("Enter the "+i+1+"City\n");
                 city = sc.next();
                  
             }*/
             
             System.out.println("Enter Friends names : ");
             
             for (int i=0;i<n;i++)
             {
                 FriendList.add(sc.next());
             }
             System.out.println("Friend names  Are : ");
             System.out.println(" "+FriendList+" \n");
            
      }
}
