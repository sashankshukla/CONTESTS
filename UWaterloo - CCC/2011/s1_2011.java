import java.util.*;
import java.io.*;
public class s1_2011{
    public static void main(String args[])throws Exception{
        BufferedReader r=new BufferedReader(new InputStreamReader(System.in));
        int n=Integer.parseInt(r.readLine());
        int tc=0;
        int sc=0;
        for(int i=0;i<n;i++){
            String s=r.readLine();
            String s1=s.toLowerCase();
            for(int j=0;j<s1.length();j++){
                char ch=s1.charAt(j);
                if(ch=='s')
                    ++sc;
                else if(ch=='t')
                    ++tc;
            }
        }
        if(tc>sc)
        System.out.println("English");
        else
        System.out.println("French");
    }
}