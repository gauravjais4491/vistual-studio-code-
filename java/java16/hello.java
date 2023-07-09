import java.util.Scanner;

import javax.annotation.processing.SupportedSourceVersion;
public class hello{
    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
        System.out.print("Enter Marks of First Subject: ");
        int a=sc.nextInt(); 
        System.out.print("Enter Marks of Second Subject: ");
        int b=sc.nextInt();
        System.out.print("Enter Marks of Third Subject: ");
        int c=sc.nextInt();
        System.out.print("Enter Marks of Fourth Subject: ");
        int d=sc.nextInt();
        System.out.print("Enter Marks of Fifth Subject: ");
        float e=sc.nextInt();
        float f=(float)((a+b+c+d+e)/500)*100;
        System.out.println(f);
    }
    
}