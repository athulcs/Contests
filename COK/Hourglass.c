/*Hourglass
Problem Statement
Print the pattern
Sample Input
3
Sample Output

3 * *
 2 * 
  1  
 * 2 
* * 3

Sample Input
5
Sample Output

5 * * * *
 4 * * * 
  3 * *  
   2 *   
    1    
   * 2   
  * * 3  
 * * * 4 
* * * * 5*/
#include <stdio.h>
void main(){
	int n,i=0,k,j=0;
	scanf("%d",&n);
	k=n;
	for(i=0;i<n;i++){
		printf("%d",n-i);
		while(j<k-1){
			printf(" *");
			j++;
		}
		printf("\n");
		k--;
		if(i==n-1)
			break;
		for(j=0;j<=i;j++)
			printf(" ");
		j=0;
	}
	for(i=n;i>1;i--){
		for(j=2;j<i;j++)
			printf(" ");
		for(j=n;j>=i;j--)
			printf("* ");
		printf("%d\n",n-i+2);
	}

}