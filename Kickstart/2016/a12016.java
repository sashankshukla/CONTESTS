import java.util.*;
import java.io.*;
public class Solution{
    public static int solve(String s){
        ArrayList<Character> a=new ArrayList<>(); int cnt=0;
        for(int i=0;i<s.length();++i){
            char ch=s.charAt(i);
            if(a.contains(ch)==false && ch!=' '){
                a.add(ch); ++cnt;
            }
        }
        return cnt;
    }

    public static void main(String[] args)throws Exception{
        BufferedReader r=new BufferedReader(new InputStreamReader(System.in));
        int t=Integer.parseInt(r.readLine()); String ans=" ";
        for(int i=0;i<t;++i){   
            int n=Integer.parseInt(r.readLine()); int max=-1;
            for(int j=0;j<n;++j){
                String s=r.readLine();
                int an=solve(s);
                if(an>max){
                    ans=s; max=an;
                }
                else if(an==max){
                    int comp=s.compareTo(ans);
                    if(comp<0)
                        ans=s;
                }
            }
            System.out.println("Case #" + (i+1) + ": " + ans);
        }
    }
}
