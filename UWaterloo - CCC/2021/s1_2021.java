import java.util.*;
import java.io.*;
public class s1_2021{
    public static void main(String[] args)throws Exception{
        BufferedReader r=new BufferedReader(new InputStreamReader(System.in));
        int n=Integer.parseInt(r.readLine());
        String[] a=r.readLine().split(" ");
        String[] b=r.readLine().split(" ");
        double t=0;
        for(int i=0;i<n;++i){
            double x=Double.parseDouble(b[i]),y=Double.parseDouble(a[i])+Double.parseDouble(a[i+1]);
            t+= (x*y)/2;
        }
        System.out.println(t);
    }
}
