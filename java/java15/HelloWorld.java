import java.io.PrintWriter;
import java.io.Writer;

// public class File{
//     public static void main(String []args) {
//     try
//     {
//     Writer f=new File("abc.txt");
//     f.createNewFile();
//     PrintWriter obj=new PrintWriter(f);
//     obj.println("hey");
//     obj.println("you");
//     obj.close();
//     }

//     catch(Exception e)
//     {
//     System.out.print(e);
//     }}

import java.util.*;
// public class main{
//      public static void main(String[] args) 
//         {
//             ArrayList list=new ArrayList();
//             list.add("A");
//             list.add("b");
//             list.add("c");

        
//     }
// }

class X{

static int x = 1;

static class Y {

static int y = x++;

static class Z

{

static int z = ++y;

}

}

}

class MainClass{

public static void main(String[] rk) {

System.out.print(X.x);

System.out.print(X.Y.y);

System.out.print(X.Y.Z.z);

}

}

