import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;
class Complex {
	public static void main(String[] args) {
		int i,j,t,m,n,k=0,l=0,o=1,len1,len2,s,u;
		String size;
		Scanner in = new Scanner(System.in);
		t=in.nextInt();
		size=in.next();
		m=Character.getNumericValue(size.charAt(0));
		n=Character.getNumericValue(size.charAt(2));
		String[][] tab1 = new String[m][n];
		String[][] tab2 = new String[m][n];
		String[][] ans = new String[m][n];

		for( i=0;i<m;i++)
			for( j=0;j<n;j++)
				ans[i][j]="";

		while(t>0){
			for(i=0;i<m;i++)
				for(j=0;j<n;j++)
					tab1[i][j]=in.next();
				
			for( i=0;i<m;i++)
				for( j=0;j<n;j++)
					tab2[i][j]=in.next();

		for( i=0;i<m;i++)
				for( j=0;j<n;j++){

					len1=tab1[i][j].length();
					len2=tab2[j][i].length();
						while(k<len1||l<len2){
							
							s=(k+o<len1)?k+o:len1;
							u=(l+o<len2)?l+o:len2;
					
							if(j%2==0&&i%2==0)
								ans[i][j]+=tab1[i][j].substring(k,s)+tab2[j][i].substring(l,u);
							else
								ans[i][j]+=tab2[j][i].substring(l,u)+tab1[i][j].substring(k,s);

							l=u;
							k=s;
							o++;
							
						}
						l=0;
						k=0;
						o=1;
			}


		for( i=0;i<m;i++){
			for( j=0;j<n;j++)
				System.out.print(ans[i][j]+" ");
			System.out.println("");
		}
		t--;
		for( i=0;i<m;i++)
			for( j=0;j<n;j++)
				ans[i][j]="";
	}
 }
}
