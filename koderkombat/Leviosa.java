import java.io.*;
import java.util.*;


class Leviosa{
    public static void main(String args[]){
        int n,m,i,j; 
        Scanner in= new Scanner(System.in);
        n=in.nextInt();
        m=in.nextInt();
        int[] k=new int[4]; 
        int[] arr=new int[n];
        for(i=1;i<=n;i++){
            if(i<n-i)
                arr[i-1]=i;
            else
                arr[i-1]=n-i;
        }
        for(i=0;i<m;i++){
            for(j=0;j<4;j++){
                k[j]=in.nextInt();            
            }
               for(j=k[1]-1;j<=k[2]-1;j++){
                   if(k[0]==0)
                    arr[j]+=k[3];
                   else
                    arr[j]-=k[3];   
             
            }
        }
        
        Arrays.sort(arr);
        System.out.println(arr[0]+" "+arr[arr.length-1]);
    }
}