#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int t,n,i,j;
    scanf("%d",&t);
    long temp;
    while(t>0){
        scanf("%d",&n);
        long a[n];
        int count[n];
        for(i=0;i<n;i++){
            scanf("%ld",&a[i]);
            count[i]=0;
        }
        for(i=0;i<n;i++){
            if(i<n){
                
            temp=a[i];
            if(temp<0)
                continue;
            count[i]++;
            for(j=i+1;j<n;j++)
                if(temp==a[j]){
                  count[i]++;
                  a[j]=-1;
                 }

             }
        }
        for(i=0;i<n;i++){
            if(count[i]%2!=0&&a[i]>0){
                printf("%ld\n",a[i]);
                break;
            }
        }
        t--;
    }
    return 0;
}
