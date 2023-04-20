package java8;

abstract class Demo
{
    abstract void read();
    abstract void show();
    abstract void modify();
}
class Cse_AnnonymousClass{
    public static void main(String args[]) {
        Demo obj=new Demo()
        {
            void read(){
                System.out.println("read");
            }
            void show(){
                System.out.println("show");
            }
            void modify(){
                System.out.println("modify");
            }
        };
        obj.read();
        obj.show();
        obj.modify();
    }
}
