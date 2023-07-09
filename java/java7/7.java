import java.util.Scanner;

import java.util.Scanner;

class person{
    Scanner sc=new Scanner(System.in);
    int age=sc.nextInt();
    void display(){
        System.out.println("As your Age is : "+age);
    }
    
    void put(){
        if (age>=18)
    {
        System.out.println("your are eligible for Vote");
    }
    else{
        System.out.println("you are not eligile for vote");
    }
}
}


class voterid{
    public static void main(String[] args) {
        person a=new person();
        a.display();
        a.put();

    }
}
