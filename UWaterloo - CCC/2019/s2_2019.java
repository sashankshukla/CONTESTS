import java.util.*;
import java.io.*;
public class s2_2019{
    private static boolean isPrime(int N){
        int max = (int) Math.sqrt(N) + 1;
        boolean p=true;
        for (int i = 2; i < max; i++){
            if (N % i == 0){
                p=false;
                break;
            }
        }
      return p;
    }
    private static int finder(int x){
        int val=0;
        int check=0;
        int i=x+2;
        while(true){
            if(isPrime(i)==true){
                val=i;
                break;
            }
            else{
                i=i+2;
            }
        }
        return val;
    }

    public static void main(String args[]) throws Exception{
        BufferedReader reader= new BufferedReader(new InputStreamReader(System.in));
        int n=Integer.parseInt(reader.readLine());
        for(int i=0;i<n;i++){
            int val=Integer.parseInt(reader.readLine());
            int k=0;
            int n1=3;
            for(k=0;k!=1;){
                int n2=(2*val)-n1;
                if(isPrime(n2)==true){
                    System.out.println(n1+" "+n2);
                    k=1;
                }
                else{
                    n1=finder(n1);
                }
            }
        }
    }
}