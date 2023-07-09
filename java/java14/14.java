import java.lang.Exception;
import java.io.*;
import java.io.IOException;

// import org.omg.CORBA.SystemException;

// import jdk.nashorn.internal.ir.CatchNode;
class Test{
    public static void main(String[] rk) {
        try(BufferedReader br=new BufferedReader(new FileReader("file")))
        {
            String str;
            while((str=br.readLine())!=null)
            {
                System.out.println(str);
            }
        }
        Catch(IOException ie)
        {
            System.out.println("exception");
        }
        
    }
}
