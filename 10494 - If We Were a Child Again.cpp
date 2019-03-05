import java.math.BigInteger;
import java.util.*;
public class Main {
    public static void main(String[] args) {
    BigInteger num1 =new BigInteger("0");
    BigInteger num2 = new BigInteger("0");
    Scanner in = new Scanner(System.in);
    String oprtn ;
    while(in.hasNext()){
        num1 = in.nextBigInteger();
        oprtn = in.next() ; 
        num2 = in.nextBigInteger();
        if(oprtn.equals("/")){
            System.out.println(num1.divide(num2) );
        }
        else if(oprtn.equals("%")){
            System.out.println(num1.mod(num2) );
        }
       
        
    }
    }
 }
