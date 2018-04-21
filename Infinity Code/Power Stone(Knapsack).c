/*Thanos has a huge army of soldiers having different levels of power. However, his battleship can only carry a limited weight. Hence he assigns you to pick the soldiers such that their combined strength is maximum.

Given the weight and power values of different soldiers, find the maximum power that can be achieved under the given weight limits.

Input Format

The first line of the input contains integer c, denoting the maximum total weight of soldiers and n denoting the number of the soldiers.

The next n lines contain two integers wi and pi each, denoting the weight and the power of the ith soldiers respectively.

Constraints

1 ≤ c, n ≤ 1000 1 ≤ wi ≤ 100 1 ≤ pi ≤ 1000

Output Format

Display the maximum total power possible for the given weight limit

Sample Input 0

4 5
1 8
2 4
3 0
2 5
2 3

Sample Output 0

13

*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int w,n,i,ans=0,max=0,maxp=0;
    scanf("%d %d",&w,&n);
    int wi[n],po[n];
    for(i=0;i<n;i++)
        scanf("%d %d",&wi[i],&po[i]);
    unsigned int powrsetsize = pow(2,n);
    int k, j;
    for(k = 0; k < powrsetsize;k++)
    {
      for(j = 0; j < n; j++)
       {
          if(k&(1<<j)){
          max+=wi[j];
          maxp+=po[j];
          }
       }
        if(maxp>ans&&max<=w)
            ans=maxp;
       max=0;
       maxp=0;
    }
    printf("%d",ans);
    return 0;
}
