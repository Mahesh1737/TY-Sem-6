import java.io.*;
import java.util.*;
import java.lang.String.*;

class setAQ2 implements Runnable
{
      String m;
      int n,i;

      setAQ2(String m)
      {
           this.m = m;
      }
    
      public void run(){
            System.out.println("Thread_"+ Thread.currentThread().getName());
            for (int i=100; i>=1; i--){
                System.out.println("Thread_"+ i);
                try{
                    Thread.currentThread().sleep(100);
                }
                catch(InterruptedException e){
                    System.out.println(e);
                }
                              
            }
            Thread.currentThread().setName(m);
            System.out.println("Thread_"+ Thread.currentThread().getName());
      }
      
      public static void main(String args[])
      {
             setAQ2 t1 = new setAQ2("Covid-19");
             Thread th= new Thread(t1);
             th.start(); 
  
      }
}
