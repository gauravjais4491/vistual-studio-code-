class students
{
int roll;
String section;

void read()
{
	roll=90;
	section="K19SD";
}
void show()
{
	System.out.println("your roll no. is" +roll);
	System.out.println("your section is"+section);
}
public static void main(String args[])
{
	students riya=new students();
	riya.read();
	riya.show();
}
}
	

	