class Human
{
    static class car{

        String name="jeep";
        int age;

        void speed()
        {
            System.out.println("i have 220 speed KPH"+ " "+name);
        }

        void mileage()
        {
            System.out.println("i have 15 KPL");
        }

        void read()
        {
            age = 10;
        }

        void show()
        {
            System.out.println(age);
        }
    }

        public static void main(String[] args)
        {
            Human.car obj=new Human.car();
            obj.read();
            obj.show();
            obj.speed();
            obj.mileage();
        }
    }
    