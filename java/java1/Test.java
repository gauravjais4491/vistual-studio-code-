// class MYCLASS{
//     public static void main(String[] args) {
//         System.out.println("hi, i am gaurav kumar jaiswal");
//     }
// }

interface A
{
static void methA() // Line 1
{
System.out.println("Static method in interface");
}
}

class B
{
static void methB() // Line 2
{
System.out.println("Static method in class");
}
}

class Test implements A extends B // Line 3
{
public static void main(String ar[]){
methA(); // Line 4
methB(); // Line 5
}
}