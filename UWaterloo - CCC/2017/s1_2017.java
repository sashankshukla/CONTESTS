import java.util.*;
import java.io.*;
public class s1_2017{
    public static void main(String args[])throws Exception{
        BufferedReader r= new BufferedReader(new InputStreamReader(System.in));
        int n=Integer.parseInt(r.readLine());
        String[] swifts=r.readLine().split(" ");
        String[] semaphores=r.readLine().split(" ");
        int t1=0;
        int t2=0;
        int never=0;
        int max=0;
        int day=0;
        for(int i=0;i<swifts.length;i++){
            t1=t1+Integer.parseInt(swifts[i]);
            t2=t2+Integer.parseInt(semaphores[i]);
            if(t1==t2 && t1>max){
                never=1;
                max=t1;
                day=i+1;
            }
        }
        if(never==0){
            System.out.println("0");
        }
        else{
            System.out.println(day);
        }
    }
}