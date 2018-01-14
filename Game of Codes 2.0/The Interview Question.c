#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int x1,y1,l1,b1,x2,y2,l2,b2,la,ba;
    scanf("%d %d",&x1,&y1);
    scanf("%d %d",&l1,&b1);
    scanf("%d %d",&x2,&y2);
    scanf("%d %d",&l2,&b2);
    
    //Quadrant translation II
    if((x1+b1<0)&&(x2+b2<0)){
        if((y1-l1>0)&&(y2-l2>0)){
        x1*=-1;
        x2*=-1;
        }
        //Quadrant translation III
        else if((y1+l1<0)&&(y2+l2<0)){
            x1*=-1;
            x2*=-1;
            y1*=-1;
            y2*=-1;
        }
    }//Quadrant translation IV
    else if((y1+l1<0)&&(y2+l2<0)){
            y1*=-1;
            y2*=-1;
    }
    
    if(x1<=x2&&(x1+b1<=x2+b2))
        ba=x1+b1-x2;
    else if(x2<=x1&&(x2+b2<=x1+b1))
        ba=x2+b2-x1;
    if(y2<=y1&&(y1-l1>=y2-l2))
        la=l1-(y1-y2);
    else if(y1<=y2&&(y2-l2>=y1-l1))
        la=l2-(y2-y1);
    printf("%d",la*ba);
    return 0;
}
