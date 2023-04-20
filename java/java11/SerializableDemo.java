package java11;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectOutputStream;
import java.io.Serializable;

class MYClass implements Serializable{
    /**
     *
     */
    private static final long serialVersionUID = 1L;
    String s;
    int i;
    double d;
    
    public MYClass(String s,int i,double d){
        this.s=s;
        this.i=i;
        this.d=d;
    }
    public String toString(){
        return "s="+s+";i="+ i +";d="+d;
    }
}

public class SerializableDemo{
    public static void main(String args[]){
        try{
            MYClass object1=new MYClass("hello",-7,27e10);
            System.out.println("object1: " +object1);
            FileOutputStream fos=new FileOutputStream("serial.txt");
            ObjectOutputStream oos=new ObjectOutputStream(fos);
            oos.writeObject(object1);
            oos.flush();
            oos.close();

        }
        catch(IOException e){
            System.out.println("Exception during serialization: " +e);
            System.out.println("Exception Handled");
        }
    }
}
