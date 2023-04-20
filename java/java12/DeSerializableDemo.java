package java12;

import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectOutputStream;
import java.io.Serializable;

class MYClass implements Serializable{
    /**
     *
     */
    private static final long serialVersionUID = 1L;
    /**
     *
     */
    // private static final long serialVersionUID = 1L;
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

public class DeSerializableDemo{
    public static void main(String args[]){
        try{
            MYClass object1;
            FileOutputStream fis=new FileOutputStream("serial.txt");
            ObjectOutputStream ois=new ObjectOutputStream(fis);
            object1=(MYClass)((Object) ois).readObject();
            fis.close();
            System.out.println("object1: " +object1);

        }
        catch(IOException e){
            System.out.println("Exception during serialization: " +e);
            System.out.println("Exception Handled");
        }
    }
}
