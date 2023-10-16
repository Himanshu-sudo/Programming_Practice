import java.util.Scanner ; 

public class test{
    static int addition(int a , int b){
        return a + b ; 
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in) ; 
        int a = sc.nextInt() ; 
        System.out.println("The first number entered is " + a) ;
        int b = sc.nextInt() ; 
        System.out.println("The second number entered is " + b) ;
        System.out.println("The addition of two numbers is " + addition(a , b)) ;
    }
}