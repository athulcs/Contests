/*Problem

Bob's crush's name starts with a vowel. That's the reason Bob loves vowels too much. He calls a string "lovely string" if it contains either all the lowercase vowels or all the uppercase vowels or both, else he calls that string "ugly string". 

For more clarification, see the sample testcase explanation.

Input

First line contains T, the number of test cases.
Next T lines contain a single string S.

Output

For each test case, print "lovely string" or "ugly string"  (without quotes)  according to the definition of Bob.

Constraints

string contains only lowercase and uppercase Latin letters. 
*/

#include <string.h>
int main(){
	int t;
	char s[100000];
	unsigned int stat = 0;
	unsigned int statC = 0;
	scanf("%d", &t);
	while(t--)
	{
	scanf("%s", &s);
	for(int i=0;i<strlen(s);i++){
		switch(s[i]){
			case 'a':stat = stat|16;break;
			case 'e':stat = stat|8;break;
			case 'i':stat = stat|4;break;
			case 'o':stat = stat|2;break;
			case 'u':stat = stat|1;break;
			case 'A':stat = stat|16;break;
			case 'E':stat = stat|8;break;
			case 'I':stat = stat|4;break;
			case 'O':stat = stat|2;break;
			case 'U':stat = stat|1;break;
		}
		
	}	

	if(stat == 31 || statC == 31)	              			
		printf("lovely string\n");
	else
		printf("ugly string\n");
	stat = 0;
	statC = 0;		
	}
	
}