class Easy{
    public static void calc(int[] a,int[] b){
        int i=0;
        int j=0;
        for(i=0;i<a.length;i++)
            for(j=i;j<a.length;j++){
                if(a[i]!=a[j])
                System.out.println("["+a[i]+","+a[j]+"]");
                else
                System.out.println("["+a[i]+"]");
               
            }
    }
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);
        int n,i,p;
        n=in.nextInt();
        int[] arr=new int[n];
        for(i=0;i<n;i++)
            arr[i]=in.nextInt();
        p=in.nextInt();
        int[] item=new int[p];
        for(i=0;i<p;i++)
            item[i]=in.nextInt();
        calc(arr,item);
    }
}