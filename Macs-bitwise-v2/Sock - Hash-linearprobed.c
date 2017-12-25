#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct Data{
    long item;
    int count;
};
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int t,n,i,j,index;
    long *a;
    scanf("%d",&t);
    long temp;
    while(t>0){
        scanf("%d",&n);
        a = (long *)calloc(n, sizeof(long));
        struct Data* hash = malloc(n * sizeof(struct Data));
        for(i=0;i<n;i++){
            scanf("%ld",&a[i]);
            hash[i].count=0;
            hash[i].item=-1;
        }
        for(i=0;i<n;i++){
            index=a[i]%n;
            if((hash[index].item!=a[i])&&(hash[index].item>0)){
             //   printf("collision:%ld!=%ld\n",hash[index].item,a[i]);
                while(hash[index].item!=-1&&hash[index].item!=a[i]){
                    index=(index+1)%n;
              //      printf("%d\n",index);
                }
                hash[index].count++;
                hash[index].item=a[i];
             //   printf("%d\n",index);
            }
            else{
            hash[index].count++;
            hash[index].item=a[i];
            }
             }
        
        for(i=0;i<n;i++){
            if(hash[i].count%2!=0){
                printf("%ld\n",hash[i].item);
                break;
            }
        }
        free(a);
        free(hash);
        t--;
    }
    return 0;
}
