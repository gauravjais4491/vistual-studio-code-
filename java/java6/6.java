package java6;

abstract class Animal
{
    abstract void eat();
    abstract void talk();
}
class CAB_AnnonymousClass{
    public static void main(String args[]) {
        Animal obj=new Animal(){
            void eat(){
                System.out.println("every animal eats");
            }
            void talk(){
                System.out.println("every animal talks");
            }
        };
        obj.eat();
        obj.talk();
}
}
