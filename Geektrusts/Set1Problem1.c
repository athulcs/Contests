#include <stdio.h>
void main(){
	char str[5][50];
	int i;
	printf("Enter messages to be sent\n");
	for(i=0;i<5;i++)
		gets(str[i]);

}