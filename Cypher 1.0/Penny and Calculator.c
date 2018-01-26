/*Penny and Calculator
Max. Marks: 100

Penny has recently bought a calculator and has discovered a very cool feature which is that it's screen shows NUMBERS. Now that she has done such a mind blowing discovery, she has taken her research a step further by stating that number 0 is printed by a pattern of 6 segments, 1 by 2 segments, 2 by 5 segments and so on upto 9. Refer the picture given below for further clearance.

She has entered a very large number into the calculator and number of digits in this number can go upto 105

. You'll ask that who's got this much time to waste? Well, Penny has got and yes, her calculator can show this much big number. Now, she wonders that how many segments are used to print this number. She has asked you to find this as she has done enough research for today.

enter image description here

Input Format:

First line contains an integer T, denoting the number of test cases.

Each of the next T lines contains a number N.

Output Format:

Output the required answer for each test case in separate line.

Constraints:

1≤T≤10

1≤
number of digits of N≤105*/
#include<stdio.h>
void main(){
	int t,count=0;
	long k,n;
	scanf("%d",&t);
	while(t>0){
		scanf("%ld",&n);
		while(n>0){
			k=n%10;
			switch(k){
				case 0:
				case 9:
				case 6:
					count+=6;break;
				case 1:count+=2;break;
				case 2:
				case 3:
				case 5:
					count+=5;break;
				case 4:count+=4;break;
				case 7:count+=3;break;
				case 8:count+=7;break;
			
			}
			n=n/10;
			printf("%ld\n",n);
		}
		printf("%d\n",count);
		count=0;
		t--;
	}
}