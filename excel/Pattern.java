import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
class Pattern {
	public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s=in.next();
        in.close();
        int i,j,k,t=0;
        t=s.length()-1;
        for(i=0;i<s.length();i++){
            while(t>i){
                System.out.print(".");
                t--;
            }
            t=s.length()-1;
            for(j=0;j<=i;j++)
                 System.out.print(s.charAt(j));
            for(k=j-2;k>=0;k--)
                System.out.print(s.charAt(k));
            System.out.print("\n");
	       }   
        t=0;
        for(i=0;i<s.length()-1;i++){
              while(t<=i){
                System.out.print(".");
                t++;
            }
            t=0;
            for(j=s.length()-1;j>i;j--)
                 System.out.print(s.charAt(j));
            for(k=j+2;k<s.length();k++)
                System.out.print(s.charAt(k));
            System.out.print("\n");
	       }  
        
    }
}