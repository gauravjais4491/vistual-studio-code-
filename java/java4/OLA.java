// Create two interfaces OLA and UBER both having a method public static Cab getCab()
// which returns the Cab object where Cab is a nested class inside OLA and UBER.

// Cab must have attributes cab_number and driver_name.
// A user rides 5 times using cabs of OLA and UBER randomly which are stored in an array.

// Now implement a method which should display the name of the driver and the company name
// i.e. OLA/UBER when the valid cab_number is entered by the user.

// Display "Invalid CAB details" when the cab_number entered by the user is incorrect

import java.util.Scanner;

import java.util.ArrayList;

class OLA
{
    class Cab
    {
        int cab_number = 11910561;
        String driver_name = "gaurav";
        String company_name="OLA";
        private Scanner sc;

        void display()
        {
            sc = new Scanner(System.in);
            System.out.print("Enter Cab Number of OLA company = ");
            int a = sc.nextInt();
            if (cab_number == a)
            {
                System.out.println("driver_name is "+ driver_name+" and " +"company_name is "+ company_name);
            }
            else
            {
                System.out.println("Invalid CAB details");
            }
        }
        void rides()
        {
            for(int i=1;;++i){
            ArrayList<String> cars = new ArrayList<String>();
            cars.add("Your "+i+" ride is cpmpleted in OLA company");
            System.out.println(cars);
            }
            
            
        
        }
   }
}

class UBER
{
    class Cab
    {
        int cab_number = 4491;
        String driver_name = "NOOB_4rMY";
        String company_name="UBER";
        private Scanner input;

        Cab() {
            input = new Scanner(System.in);
        }

        void display()
        {
            System.out.print("Enter Cab Number of UBER company = ");
            int r = input.nextInt();
            if (cab_number == r)
            {
                System.out.println("driver_name is "+ driver_name+" and " +"company_name is "+ company_name);
            }
            else
            {
                System.out.println("Invalid CAB details");
            }
        }
        
   }
}
class A{

    public static void main(String[] args)
    {
        
        
        OLA x=new OLA();
        OLA.Cab y= x.new Cab();

        UBER a=new UBER();
        UBER.Cab b = a.new Cab();

        y.display();
        y.rides();
        y.rides();
        

        b.display();

        
    }
}