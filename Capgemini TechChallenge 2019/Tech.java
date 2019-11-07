/* Read input from STDIN. Print your output to STDOUT*/

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
    static int minx =1000000;
    static int miny =1000000;
    
    public static void initializeFire(int x,int y){
        if(x>maxx||y>maxy)
            return;
        if(y<miny||x<minx)
            return;
        if(fireArray[x][y]==0){
            fireArray[x][y]=1;
            if(checkWindowBetween(x,y,x+1,y))
                initializeFire(x+1,y);
            if(checkWindowBetween(x,y,x-1,y))    
                initializeFire(x-1,y);
            if(checkWindowBetween(x,y,x,y+1))    
                initializeFire(x,y+1);
            if(checkWindowBetween(x,y,x,y-1))    
                initializeFire(x,y-1);
        }
    }
    
    public static boolean checkWindowBetween(int m,int n,int p1,int p2){
        for(int i=0;i<w;i++){
            if(Line2D.linesIntersect(m,n,p1,p2,points[windows[i][0]][0],points[windows[i][0]][1],points[windows[i][1]][0],points[windows[i][1]][1]))
                return true;
        }
        
        return false;
    }
    
   public static void main(String args[] ) throws Exception {
      

	//Write code here
        Scanner s = new Scanner(System.in);
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
        fireArray=new int[maxx][maxy];
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
        System.out.println("OK");

        }
    
}
