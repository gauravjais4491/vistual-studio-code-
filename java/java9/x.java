// import javax.xml.validation.Validator;
package java9;

class UserExc extends RuntimeException
{
    /**
     *
     */
    private static final long serialVersionUID = 3182836788130191978L;

    UserExc(){
        System.out.println("the exception is thrown");
    }
}
public class x{
    private static int attendance;
    void attendance(int attendance) throws UserExc{
        if(attendance<75){
            throw new UserExc();
        }
        else{
            System.out.println("you are allowed to get the exam hall ticket");
        }
    }
    public static int getAttendance() {
        return attendance;
    }
    public static void setAttendance(int attendance) {
        x.attendance = attendance;
    }
    public static void main(String[] args) {
        try {
            setAttendance(79);
            
        } catch (Exception e) {
            System.out.println(e);
            
        }


        
    }
    public x() {
    }
}