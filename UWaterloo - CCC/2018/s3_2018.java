import java.util.*;
import java.io.*;
class s3_2018{
    public static int steps(String arr[][],int i,int j,int steps){
        int cnt=steps;
        Stack<String> s=new Stack<>();
        String l=arr[i-1][j];
        String r=arr[i+1][j];
        String u=arr[i][j+1];
        String d=arr[i][j-1];
        if(arr[i][j].equals("S"))
        return cnt;
        else if(l.equals("W")&&r.equals("W")&&u.equals("W")&&d.equals("W"))
            return -1;
        else if(l.equals(".")&&(!s.peek().equals("R"))){
            s.add("L");
            return steps(arr,i-1,j,++cnt);
        }
        else if(r.equals(".")&&(!s.peek().equals("L"))){
            s.add("R");
            arr[i+1][j]="W";
            return steps(arr,i+1,j,++cnt);
        }
        else if(u.equals(".")&&(!s.peek().equals("D"))){
            s.add("U");
            arr[i][j+1]="W";
            return steps(arr,i,j+1,++cnt);
        }
        else {
            s.add("D");
            arr[i][j-1]="W";
            return steps(arr,i,j-1,++cnt);
        } 
    }

    public static void main(String args[]) throws Exception{
        BufferedReader r=new BufferedReader(new InputStreamReader(System.in));
        int m=Integer.parseInt(r.readLine());
        int n=Integer.parseInt(r.readLine());
        String[][] arr=new String[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                arr[i][j]=r.readLine();
            }
        }
        System.out.println(steps(arr,1,3,0));
    }

}