class employee
{
	String employeename;	
	int employeenumber;
	int salary;
void read()
{
	employeename="gaurav kumar jaiswal";
	employeenumber=100;
	salary=20000;
}
void display()
{
	System.out.println("employee name is" +employeename);
	System.out.println("employee number is" +employeenumber);
	System.out.println("employee Salary is" +salary);
}
public static void main(String args[])
{
	employee gaurav=new employee();
	gaurav.read();
	gaurav.display();
}
}
