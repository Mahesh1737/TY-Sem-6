import java.util.TreeSet;

class ColorsList{
      public static void main(String args[])
      {
            
             
             TreeSet<String> colors = new TreeSet<>();
             
             colors.add("red"); 
             colors.add("black");
             colors.add("white");
      
             System.out.println("Colors  Are : ");
             for (String color : colors)
             {                 
                 System.out.println(" "+color+" \n");
             }
            
      }
}
