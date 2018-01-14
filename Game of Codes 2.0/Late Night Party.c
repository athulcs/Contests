#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int t,b,n,i,j,cs=0,es=0,k=0,l=0,*c,*e,le=0;
    //int c[100],e[100],ca[1000],ea[1000];
    
    scanf("%d",&t);
    while(t>0){
        cs=0;
        es=0;
        l=0;
        le=0;
        scanf("%d %d",&b,&n);
        c = (int *)calloc(n, sizeof(int));
        e = (int *)calloc(n, sizeof(int));
        for(i=0;i<n;i++)
            scanf("%d %d",&c[i],&e[i]);
        for(i=0;i<n;i++){
            if(c[i]<=b&&es>le)
               {l=c[i];
                le=e[i];
                }
                cs=c[i];
                es=e[i];
            for(j=i+1;j<=n;j++){
                cs+=c[j];
                es+=e[j];
               if(cs<=b&&es>le)
               {l=cs;
                le=es;
                }
        }
        }
    printf("%d %d\n",l,le);
    free(c);   
    free(e);        
        t--;
    }
   /* printf("%d %d\n",b,n);*/
    
    return 0;
}
