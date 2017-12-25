#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{   
    int n,i,k,j,t=0;
    scanf("%i",&n);
    char str[n][50];
    char check[n][10];
    char type[15];
    char rev[5];
    char temp[50];
    for(i=0;i<n;i++)
        scanf(" %[^\n]s",str[i]);
    scanf("%i %s %s",&k,rev,type);
    char* tok;
  
    for(i=0;i<n;i++){
    strcpy(temp,str[i]);
    tok = strtok(temp, " ");
    j=1;
        while (tok != 0) {
            if(j==k)
                strcpy(check[i],tok);
            tok = strtok(0, " ");
            j++;
        }
    }
    
    if(strcmp(type,"lexicographic")==0)
        t=1;
        for(i=0; i<n; ++i)
        for(j=i+1; j<n ; ++j)
        {
            if(t?(strcmp(check[i], check[j])>0):(atoi(check[i])>atoi(check[j])))
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
                strcpy(temp,check[i]);
                strcpy(check[i],check[j]);
                strcpy(check[j],temp);
            }
        }
    
      if(strcmp(rev,"true")==0){
          i=0;
          j=n-1;
          while(i<j){
              strcpy(temp,str[i]);
              strcpy(str[i],str[j]);
              strcpy(str[j],temp);
              i++;
              j--;
          }
      }
       
 for(i=0;i<n;i++)
     printf("%s\n",str[i]);
 
  /*  printf("%i %s %s",k,rev,type);*/
    return (0);
}