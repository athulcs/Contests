/*Since the Tesseract is a cosmic wonder, they have set up a laboratory having n computers to unravel the secrets behind the unlimited power of the Tesseract. Each of the computers are indentified by an unique number from 1 through n.

Each day the laboratory has to perform q tasks. The ith task is characterized by 3 integers:

    ti : the time at which the task arrives
    ki : the number of computers required to complete the task
    di : the time needed to complete the task

To compute the ith task you will require ki computers to be available at the time ti. A computer is said to be available if it is not already running a task.

For performing a task, only those computers with the lowest ids will be selected from the available ones. If there are not enough computers at time ti then the task is ignored.

As a HYDRA associate your job is to find out which tasks will be completed and which will be ignored.

All times are in seconds

Input Format

The first line contains 2 integers n and q

Each of the following q lines contain 3 integers specifying the ith task

Constraints

1 ≤ n ≤ 100, 1 ≤ q ≤ 105

1 ≤ ti ≤ 106

1 ≤ ki ≤ n

1 ≤ di ≤ 1000

Output Format

The output contains q lines.

For each task print print the sum of ids of the computers used to complete the task.

If the task is ignored then print -1

Sample Input 0

4 3
1 3 2
2 2 1
3 4 3

Sample Output 0

6
-1
10

Explanation 0

In the first second, the first task will come, it will be performed on computers with ids 1, 2 and 3 (the sum of the ids equals 6) taking two seconds.

In the next second, the second task will come. This task will be ignored because only computer with id 4 will be available at that time.

In the 3rd second the third task will come. By this time, computers with the ids 1, 2 and 3 will be available again, so the third task will be done on all the computers*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,q,i;
    scanf("%d %d",&n,&q);
    int ti[q],ki[q],di[q],ans[q];
    for(i=0;i<q;i++)
        scanf("%d %d %d",&ti[i],&ki[i],&di[i]);
    
    return 0;
}
