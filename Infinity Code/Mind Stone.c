/*Tony Stark and Dr. Bruce Banner were investigating the computer codes inside the mind stone to use it to complete the Ultron Program. They are in the process of modifying the code to make it work with J.A.R.V.I.S.

Each statement of code in the mind stone is given as a string s of length n consisting of 0's and 1's. A substring of the string s is said to be stable if the number of zeroes is equal to the number of ones.

Your task is to determine the length of the longest stable substring of s, so that you can modify it and foil the attempts of Tony and Dr. Banner at completing the Ultron Program.

Input Format

The first line contains the number of test cases t

Each test case consists of two lines; the first line contains the length of the string n and the second line contains the string s

Constraints

1 ≤ t,n ≤ 105

Output Format

For each test case print the length of the longest stable substring. If no such substring exists then print 0.

Sample Input 0

2
8
11010111
3
111

Sample Output 0

4
0

*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int t,i,j,k,l,n,one=0,two=0,ans=0;
    scanf("%d",&t);
    while(t>0){
        scanf("%d",&n);
        char str[n];
        scanf("%s",str);
    
    for (int i = 1; i <= n; i++) 
    {    
      
        for (int j = 0; j <= n - i; j++) 
        {
          
            int k = j + i - 1; 
            if(((k-j)+1)%2==0){
            for (int l = j; l <= k; l++) {
                printf("%c",str[l]);
                if(str[l]=='1')
                    one++;
                else
                    two++;
                
            }
            
            if(one==two)
                if(one+two>ans)
                    ans=one+two;
            printf("\n");
            one=0;
            two=0;
            }
            
        }
        
    }
      //  printf("%d\n",ans);
        ans=0;
        t--;
    }
    return 0;
}