import java.util.*;

public class Condition {

    // @SuppressWarnings("resource")
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter your age: ");
        int age = sc.nextInt();

        if(age > 18)
        {
            System.out.println("You are eligible to vote");
        }
        else
        {
            System.out.println("Nabalik ho tum");
        }
        int body = sc.nextInt();

        sc.close();
    }
}