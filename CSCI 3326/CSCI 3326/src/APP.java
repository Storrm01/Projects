import java.util.Scanner;

public class APP{
    public static void main(String[] ags){
        double numDouble = 2.3333333333;
        float numFloat = (float) numDouble;

        String word = "123";
        int numInt = Integer.parseInt(word);
        word = "2.33333";
        numDouble = Double.parseDouble(word);
        System.out.println( numInt );
        System.out.println( numDouble );

        // To get user input, we need to create a Scanner object
        Scanner input = new Scanner( System.in );

        // I also want to get name and age of person
        String name;
        int age;
        System.out.print("Enter your name: ");
        name = input.next(); // cin >> name;
        // name = input.nextLine(); // getline(cin, name);

        System.out.print("Enter your age: ");
        age = input.nextInt();

        System.out.println(name + " is " + age + " years old.");
        
    }
}