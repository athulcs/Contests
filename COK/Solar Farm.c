/*    1
    2
    3

Solar Farm
Problem Statement
In a solar power farm there are n solar panels. Initially all these panels were getting the comparable amount of sunlight.But after some time this changed.In every day If a solar panel gets more sunlight than the panel on it’s left It is removed from the fleet.Now you will be given the amount of sunlight these panels initially received.This can help you find the number of days after which no panel will be removed from the fleet.This is the point when there will be no panel receiving more sunlight than the panel on it’s left.

Input format

n - Initial number of solar panels
Array S - Si specifies the initial value of sunlight the i’th panel was getting
Constraints

1 <= n <=10^5
0 <= Si <= 10^9

Output

The number of days after which no panel will be removed from the fleet.
Sample Input
5
5 4 3 2 1
Sample Output
0*/
#include <stdio.h>
void main(){
	int n,i,k=0,l=-1,b;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	do{	
		l++;
		b=k;
		for(i=0;i<n-1;i++)
			if(a[i]<a[i+1]){
				a[i+1]=-1;
				k++;
			}
	}while(b!=k);
	printf("%d\n",l);
}