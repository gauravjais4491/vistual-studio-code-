import java.util.Scanner;
import java.util.Scanner;

class OLA
{
    class Cab
    {
        int x;
        int cab_number = 11910561;
        String driver_name = "gaurav kumar jaiswal";

        void display()
        {
            Scanner sc = new Scanner(System.in);
            System.out.print("Enter Cab Number = ");
            int a = sc.nextInt();
            Scanner input = new Scanner(System.in);
            System.out.print("Enter Driver Name = ");
            String b = input.nextLine();
            if (b == driver_name && a == cab_number)
            {
                System.out.println(driver_name);
            }
            else
            {
                System.out.println("Invalid CAB details");
            }
        }
        
}

public class a
{
    public static void main(String[] args)
    {
        OLA x=new OLA();
        OLA.Cab y= x.new Cab();
        y.display();
    }
}
}