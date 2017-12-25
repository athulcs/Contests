
import java.io.*;
import java.util.*;

class TestClass {
   
   static int GCD(int a, int b) {
    if (b==0)
     return a;
    return GCD(b,a%b);
    }
    
    
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        int i,j,k,m,n,sum,big,jump,newsum,check;
        while(t>0){
            m=in.nextInt();
            n=in.nextInt();
            int[][] arr=new int[m][n];
            sum=0;
            big=0;
            newsum=0;
            jump=-1;
            check=0;
            for(i=0;i<m;i++)
                for(j=0;j<n;j++)
                    arr[i][j]=in.nextInt();
            k=0;
            while(k<n){
                big=arr[0][k];
                sum=big;
                for(i=0;i<m-1;i++){
                    
                    for(j=0;j<n;j++){
                        if(GCD(big,arr[i+1][j])!=1){
                            if((arr[i+1][j]>jump)||(jump==-1)){
                            jump=arr[i+1][j];
                             check=1;
                                System.out.println("scene "+big+" "+" "+arr[i+1][j]+" "+GCD(big,arr[i+1][j]));
                            }
                        }
                    }
                    if(check==0){
                        newsum=big;
                        break;}
                    check=0;
                    big=jump;
                    sum+=big;
                   jump=-1;

             }
                if(newsum<sum){
                    newsum=sum;
               
                }
                k++;
            }
            System.out.println(newsum);
            t--;
        }
    }
}
   
 

