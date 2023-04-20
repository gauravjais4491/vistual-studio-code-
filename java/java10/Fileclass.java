package java10;

import java.io.File;

public class Fileclass {
    public static void main(String args[]) {
        try{
            File f1 =new File("C:\\Users\\gaura\\Desktop\\vistual studio code program\\java\\java10");
            f1.createNewFile();
            File f2 =new File("b.txt");
            f2.createNewFile();
            System.out.println("file name:="+f1.getName());
            System.out.println("path="+f1.getPath());
            System.out.println("absolute path= "+f1.isAbsolute());
            System.out.println("parent:"+f1.getParent());
            System.out.println(f1.exists() ? "exist":"doesnot exist");
            System.out.println("is a directory"+f1.isDirectory());
            System.out.println("is a file"+f1.isFile());
            System.out.println("can write: "+f1.canWrite());
            System.out.println("can read: "+f1.canRead());


        }catch(Exception e)
        {
            System.out.println("exception are handled and not declared");
        }
        
    }
    
}


// public class PrintWriter{
//     public static void main(String[] args) throws Exception{
//         File f=new File("abc.txt");
//         f.createNewFile();
//         PrintWriter output = new PrintWriter(f);
//         output.print("java class");
//           output.println(40);
//           output.print("lpu");
//           output.println(85.5);
//           output.print("a");
//         output.close();

//     }

// }

