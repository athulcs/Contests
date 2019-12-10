import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class Sms {

    
   public static void main(String args[] ) throws Exception {
        Scanner s = new Scanner(System.in);
        String input;
        String emailregex=".*(\\b[A-Z0-9._%+-]+@[A-Z0-9.-]+\\.[A-Z]{2,4}\\b).*";
        String pcoderegex=".*([A-Z]{3}"+"[0-9]{4}T"+"[A-Z]{4}).*";
        input=s.nextLine();
        Pattern pcode = Pattern.compile(pcoderegex);
        Matcher pm = pcode.matcher(input);
        Pattern email = Pattern.compile(emailregex,Pattern.CASE_INSENSITIVE);
        Matcher em = email.matcher(input);
        if(pm.matches()&&em.matches()){
            System.out.println("EmailID:"+em.group(1)+"\nProductCode:"+pm.group(1));
        }
        else
            System.out.println("Invalid");
       
        s.close();
    
    }
}
