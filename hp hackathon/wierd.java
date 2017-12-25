/* IMPORTANT: Multiple classes and nested static classes are supported */

/*
 * uncomment this if you want to read input.
//imports for BufferedReader
import java.io.BufferedReader;
import java.io.InputStreamReader;

//import for Scanner and other utility classes
import java.util.*;
*/
import java.io.*;
import java.util.*;

class TestClass {
     static boolean check(String a, String b,int m,int n){
    
        
        
        if (m == 0) 
            return true;
        if (n == 0) 
            return false;
             
       
        if (a.charAt(m-1) == b.charAt(n-1))
            return check(a, b, m-1, n-1);
 
       
        return check(a, b, m, n-1);
    }
     public static void main(String args[]) throws Exception {
         Scanner in=new Scanner(System.in);
         int c,i,j,count=0;
         c=in.nextInt();
         while(c>0){
             String s=in.next();
             String t=in.next();
             count=0;
             for(i=0;i<s.length();i++){
                 for(j=i+1;j<=s.length();j++){
                     
                         System.out.println(i+" "+j+" "+s.replace(s.substring(i,j),""));
                     if(check(t,s.replace(s.substring(i,j),""),t.length(),(s.replace(s.substring(i,j),"")).length())){
                        System.out.println("yas");
                         count++;
                     }
                     }
                     
                 }
             System.out.println(count+"*****\n"); 
            
             c--;
             }
             
         }
        
     }
 

