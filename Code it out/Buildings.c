/*Buildings
Problem Statement
Motu is a skydiver. Every time he jumps off an airplane, he tries to land on one of the highest available buildings in his premises.

Input

First line contains an integer N denoting the total number of buildings in the area. The second line contains N space-separated integers, where each integer I denotes the height of the Ith building.

Output

Print the available number of buildings on a new line.

Explanation

Here the buildings with height 8 has the maximum heights. As there are 2 such buildings, hence it is the answer.

Constraints

1 <= N <= 100
1 <= Height <= 1000*/

#include<stdio.h>
int main(){
  int a[100],i;
  int small=0;
  int n,count=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  	if(a[i]>small){
      small=a[i];
      count=1;
    }
    else if(a[i]==small)
      count++;
  }
  printf("%d\n",count);
    return 0;
}