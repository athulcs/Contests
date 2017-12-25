#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
                       
int main()
{   
    int n,i,k,j,t=0,r=0;
    scanf("%i",&n);
    char str[n][1000];
    char check[n][1000];
    char type[50];
    char rev[50];
    char temp[1000],temp1[1000];
    for(i=0;i<n;i++){
        scanf(" %[^\n]s",str[i]);
      //  printf("%i\n",i);
    }
    scanf("%i %s %s",&k,rev,type);
  /*   for(i=0;i<n;i++)
     printf(" %s\n",str[i]);*/
                
    
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
    if(strcmp(rev,"true")==0)
        r=1;
    
            if(t)
            {    for (int gap = n/2; gap > 0; gap /= 2)
                {
                    for (int i = gap; i < n; i += 1)
                    {
                        strcpy(temp,str[i]);
                        strcpy(temp1,check[i]);

                        int j;            
                        for (j = i; j >= gap && r?(strcmp(check[j - gap],temp1) <= 0):(strcmp(check[j - gap],temp1) >= 0); j -= gap)
                             {
                            strcpy(str[j],str[j-gap]);
                            strcpy(check[j],check[j-gap]);
                        }

                        strcpy(str[j],temp);
                        strcpy(check[j],temp1);
                     
                          
                       
                    }
                 }   
           }
         
            
            else{
                
                for (int gap = n/2; gap > 0; gap /= 2)
                  {
                    for (int i = gap; i < n; i += 1)
                    {
                        strcpy(temp,str[i]);
                        strcpy(temp1,check[i]);

                        int j;            
                        for (j = i; j >= gap && r?(atoi(check[j - gap]) <= atoi(temp1)):(atoi(check[j - gap]) >= atoi(temp1)); j -= gap){
                            strcpy(str[j],str[j-gap]);
                            strcpy(check[j],check[j-gap]);
                        }

                        strcpy(str[j],temp);
                        strcpy(check[j],temp1);
                     }
                 }
        }
 for(i=0;i<n;i++)
     printf("%s\n",str[i]);
                

    return (0);
           
}