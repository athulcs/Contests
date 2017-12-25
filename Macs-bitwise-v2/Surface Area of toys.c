#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int m,n,i=0,j,la=0,da=0,tu=0,area;
    scanf("%i %i",&m,&n);
    int a[m][n];
    tu=m*n*2;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    
    //La calculation
     for(i=0,j=0;i<m;i++){
         la+=a[i][j];
     //    printf("da=%d a[%d][%d]=%d ",da,i,j,a[i][j]);
        for(j=0;j<n-1;j++)
        {   if(a[i][j]!=a[i][j+1])
            la+=a[i][j+1]>a[i][j]?a[i][j+1]-a[i][j]:a[i][j]-a[i][j+1];
          
         //   printf("da=%d ",da);

        }
         la+=a[i][j];
         
        // printf("da=%d a[%d][%d]=%d \n",da,i,j,a[i][j]);
         j=0;
}
    
    //Da calculation
     for(i=0,j=0;i<n;i++){
         da+=a[j][i];
      //   printf("da=%d a[%d][%d]=%d* ",da,j,i,a[j][i]);
        for(j=0;j<m-1;j++)
        {   if(a[j][i]!=a[j+1][i])
            da+=a[j+1][i]>a[j][i]?a[j+1][i]-a[j][i]:a[j][i]-a[j+1][i];
          
       //     printf("da=%d a[%d][%d]=%d ",da,j,i,a[j][i]);

        }
         da+=a[j][i];
         
     //    printf("*da=%d a[%d][%d]=%d \n",da,j,i,a[j][i]);
         j=0;
}
    area=da+la+tu;
    printf("%d",area);
    return 0;
}
