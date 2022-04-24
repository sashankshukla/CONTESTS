import java.util.*;
import java.io.*;
public class s2_2011{
    public static void main(String args[])throws Exception{
        BufferedReader r=new BufferedReader(new InputStreamReader(System.in));
        ArrayList<String> a=new ArrayList<>();
        int n=Integer.parseInt(r.readLine());
        int cnt=0;
        for(int i=0;i<(2*n);i++){
            a.add(r.readLine());
        }
        for(int i=0;i<n;i++){
            if(a.get(i).equals(a.get(i+n)))
                ++cnt;
        }
        System.out.println(cnt);
    }
}