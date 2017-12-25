import java.io.*;
import java.util.*;
public class Travel{
    static int[] ans;
	public static int search(int data){
		int k;
		for(k=0;k<ans.length;k++){
			if (ans[k]==data) {				
				break;	
			}
		}
		return k;
	}
	public static void main(String[] args){
		int n,m,t,count=0;
		Travel obj = new Travel();
		Scanner in = new Scanner(System.in);
		n=in.nextInt();
		m=in.nextInt();
		int[][] arr = new int[m][2];
		obj.ans = new int[n];
		for(int i=0;i<m;i++){
			for(int j=0;j<2;j++){
				arr[i][j]=in.nextInt();
			}
		}
		for(int i=0;i<n;i++){
			obj.ans[i]=i+1;
		}
		while(count!=m){
			count=0;
			for(int j=0;j<m;j++){
				if(search(arr[j][0])>search(arr[j][1])){
					count=0;
					t=arr[j][0];
					obj.ans[search(arr[j][0])]=arr[j][1];
					obj.ans[search(arr[j][1])]=t;
				}
				count++;                  
			}
		}

	for(int i=0;i<n;i++)
		System.out.print(obj.ans[i]);
	}
}