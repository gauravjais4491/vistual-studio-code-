package java5;

    import java.util.*;  
    class UserInputDemo1  
    {  
    private static Scanner sc = new Scanner(System.in);

    public static void main(String[] args)  
    {  
    System.out.print("Enter a string: ");  
    String str= sc.nextLine();              //reads string  
    System.out.print("You have entered: "+str);             
    }  
    }  

