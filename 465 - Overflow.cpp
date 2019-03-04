import java.math.BigDecimal;
import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        
        while(in.hasNext())
        {
        String n1=in.next();
        BigDecimal num1=new BigDecimal(n1);
        String oprtn= in.next();
        String n2=in.next();
        BigDecimal num2=new BigDecimal(n2);
        BigDecimal sum= new BigDecimal("0");
        if(oprtn.equals("+")){
            sum=num1.add(num2);
        }
        else
            sum=num1.multiply(num2);
        BigDecimal maximum=new BigDecimal("2147483647");
        int check=num1.compareTo(maximum);
        System.out.println(n1+" "+oprtn+" "+n2);
        if(check==1)
            System.out.println("first number too big");
        check=num2.compareTo(maximum);
        if(check==1)
            System.out.println("second number too big");
        check=sum.compareTo(maximum);
        if(check==1)
            System.out.println("result too big");
        }
        
    }

 }
