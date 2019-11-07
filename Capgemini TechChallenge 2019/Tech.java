/**
 * 
 */

import java.awt.geom.Line2D;
import java.io.*;
import java.util.*;

public class CandidateCode {
    
    static int[][] points;
    static int[][] windows;
    static int[][] fireArray;
    static int p,w;
    static int maxx = 0;
    static int maxy = 0;
    static int count=0;
    static int minx =1000000;
    static int miny =1000000;
    static double xc,yc;
    
    public static void destroyWindows(){}
    
    public static void checkFireComplete(){}
    
    public static void windowCount(){}
    
    public static void initializeFire(int x,int y){
        if(x>maxx||y>maxy)
            return;
        if(x<0||y<0)
            return;
        if(fireArray[x][y]==0){
            if(x<8&&y<8&&x>0&&y>0)
               System.out.println("Error:"+x+","+y);
            else
                System.out.println("Correct:"+x+","+y);
            if(x==1&&y==1)
                return;
            fireArray[x][y]=1;
            xc=x+0.5;
            yc=y+0.5;
            if(!checkWindowBetween(xc,yc,xc+1,yc))
                initializeFire(x+1,y);
            if(!checkWindowBetween(xc,yc,xc-1,yc))    
                initializeFire(x-1,y);
            if(!checkWindowBetween(xc,yc,xc,yc+1))    
                initializeFire(x,y+1);
            if(!checkWindowBetween(xc,yc,xc,yc-1))    
                initializeFire(x,y-1);
        }
    }
    
    public static boolean checkWindowBetween(double m,double n,double p1,double p2){
        if(p1<0)
            return false;
        if(p1>maxx)    
            return false;
        if(p2<0)
            return false;
        if(p2>maxy)
            return false;
        for(int i=0;i<w;i++){
            if(Line2D.linesIntersect(m,n,p1,p2,points[windows[i][0]-1][0],points[windows[i][0]-1][1],points[windows[i][1]-1][0],points[windows[i][1]-1][1]))
                return true;
        }
        return false;
    }
    
   public static void main(String args[] ) throws Exception {
      

    //Write code here
        File file = new File(input.txt);
        Scanner s = new Scanner(file);
        p=s.nextInt();
        s.nextLine();
        s.nextLine();
        points=new int[p][2];
        for(int i=0;i<p;i++){
            for(int j=0;j<2;j++)
                points[i][j]=s.nextInt();
                if(points[i][0]<minx)
                    minx=points[i][0];
                if(points[i][0]>maxx)
                    maxx=points[i][0];
                if(points[i][1]>maxy)
                    maxy=points[i][1];            
                if(points[i][1]<miny)
                    miny=points[i][1];   
                    
            s.nextLine();
        }
        fireArray=new int[maxx+1][maxy+1];
        w=s.nextInt();
        s.nextLine();
        s.nextLine();
        windows= new int[w][2];
        for(int i=0;i<w;i++){
            for(int j=0;j<2;j++)
                windows[i][j]=s.nextInt();
        if(s.hasNextLine())
        s.nextLine();     
        }
        initializeFire(0,maxy);
        System.out.println("maxx="+maxx+",maxy="+maxy+"minx="+minx+"miny="+miny);
        for(int i=0;i<maxx;i++){
            for(int j=0;j<maxy;j++)
                System.out.print(fireArray[i][j]+" ");
            System.out.println();    
        }
    
    }
}
