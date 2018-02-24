/*The Soul stone, according to recent information of your sources is said to be in Wakanda,Africa,Earth. Your mission is to infiltrate Wakanda undetected. Wakanda has recently opened up their borders to strangers but, they are very careful people.

Their technological developments head had built a system to detect truth from lie, but its not perfect. It only tells how many are speaking the truth. You arrive at the borders of Wakanda with N-1 strangers. Some are friendly, some are not. Upon reaching the borders, the Wakandians asked the following question to all

"Who among you is not from earth?" (A weird question indeed, as if they had been warned!)

They required a quick answer and so you spoke the Nth answer. And the truth detector said M spoke truth. You need to know whether you should run and come another day or not?

You must run if it is found that you are the alien, else stand your ground.

Input Format

First line of input denote N, number of strangers/answers to the question

N following lines are sentences which each stranger (including you) spoke

These statments are of the form

X knws who it is

or

Y is the alien

next line is M denoting the response of the truth detector

Constraints

    All the N strangers know you are the alien but some would cover you
    The strangers are indexed from 1 to N
    1<=N<=40000
    0<=M<=N
    1<=X,Y<=N

Output Format

Output 'RUN!' if your cover has been blown else 'Stay!'

Sample Input 0

5
2 knws who it is
3 knws who it is
5 is alien
2 is alien
4 knws who it is
3

Sample Output 0

RUN!

Explanation 0

As you can observe, 1,2,3 says the 5(you) are the alien, Here, 3 people are saying the truth, the only group of three people who could be saying truth is 1,2,3 which points at 5(you) so you must run!*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
