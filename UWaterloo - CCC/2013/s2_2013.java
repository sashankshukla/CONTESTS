import java.util.*;
import java.io.*;
public class s2_2013{
    public static int sum(List<Integer> x){
        int total=0;
        for(int i=0;i<x.size();i++){
            total+=x.get(i);
        }
        return total;
    }

    public static void main(String args[])throws Exception{
        BufferedReader r=new BufferedReader(new InputStreamReader(System.in));
        int maxw=Integer.parseInt(r.readLine());
        int trains=Integer.parseInt(r.readLine());
        ArrayList<Integer> a=new ArrayList<>();
        int n=4;
        int cnt=trains;
        for(int i=0;i<trains;i++){
            a.add(Integer.parseInt(r.readLine()));
        }
        int val=0;
        for(int i=-3;i<=trains-n;i++){
            if(i<0)
            val=sum(a.subList(0,i+n));
            else
            val=sum(a.subList(i,i+n));
            if(val>maxw){
                cnt=i+n-1;
                break;
            }
        }
        System.out.println(cnt);
    }
}
