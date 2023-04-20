package java;

interface Vehicle
{
	String name="lamborgini";
	String modelno="Urus";
	void data();
	void speed();
	void milleage();
}
class lamborgini implements Vehicle
{

	public void data()

	{
		System.out.println(name);
		System.out.println(modelno);
	}

        public void milleage()

	{
		System.out.println(" milleage : 8.0 kmpl ");
	}

	public void speed()

	{
		System.out.println("Top speed of lamborgini is 305km/h");
	}
	
}
class interface1
{
	public static void main(String[] args)
	{
		Vehicle x=new lamborgini();
		x.data();
                x.milleage();
		x.speed();
		
	}
}