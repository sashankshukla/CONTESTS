import java.util.*;
import java.io.*;
class s2_2018{
    public static int[][] rotate(int[][] a, int n) {

        for (int i=0; i< n-1; i++){  
            for (int j=i; j<n-1-i; j++){   
                int temp = a[i][j];    
                a[i][j] = a[n-1-j][i];
                a[n-1-j][i] = a[n-1-i][n-1-j];
                a[n-1-i][n-1-j] = a[j][n-1-i];
                a[j][n-1-i] = temp;
            }
        }
        return a;
    }

    public static void main(String args[])throws Exception{
        BufferedReader r=new BufferedReader(new InputStreamReader(System.in));
        int n=Integer.parseInt(r.readLine());
        int[][] arr=new int[n][n];
        double min=Math.pow(11,9);
        for(int i=0;i<n;i++){
            int c=0;
            String[]a=r.readLine().split(" ");
            for(int j=0;j<n;j++){
                arr[i][j]=Integer.parseInt(a[c]);
                if((double)arr[i][j]<min)
                    min=(double)arr[i][j];
                c=c+1;
            }
        }

        if((double)arr[0][0]==min){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    System.out.print(arr[i][j]+" ");
                }
                System.out.println();
            }
        }
        else{
            while((double)arr[0][0]!=min){
                rotate(arr,n);
                if(arr[0][0]==min){

                    for(int i=0;i<n;i++){
                        for(int j=0;j<n;j++){
                            System.out.print(arr[i][j]+" ");
                        }
                        System.out.println();
                    }
                }
            }
        }

    }
}