import java.io.*;
import java.util.*;
import java.lang.String.*;

class setAQ1 extends Thread
{
      String msg = null;
      int n;
      setAQ1(String msg, int n){
            this.msg = msg;
            this.n = n;
      }
      public void run(){
            for (int i=1; i<=n; i++){
                System.out.println(msg+" "+i+" times");
                System.out.println(" ");
            }
      }
      
      public static void main(String a[])
      {
             int n=10;
             setAQ1 t1 = new setAQ1("Covid-19",n);
             t1.run();
             setAQ1 t2 = new setAQ1("LockDown-2020",n+10);
             t2.run();             
             setAQ1 t3 = new setAQ1("Vaccine-21",n+20);
             t3.run();
      }
}
