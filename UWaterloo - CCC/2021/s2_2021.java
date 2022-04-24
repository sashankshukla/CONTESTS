import java.util.*;
import java.io.*;
public class s2_2021{
    public static int[][] solve(int[][] arr, String t, int d, int m, int n){
        if(t.equals("R")){
            for(int i=0;i<m;++i){
                ++arr[d][i];
            }
        }
        else{
            for(int i=0;i<n;++i){
                ++arr[i][d];
            }       
        }
        return arr;
    }

    public static void main(String[] args)throws Exception{
        BufferedReader r=new BufferedReader(new InputStreamReader(System.in));
        int m=Integer.parseInt(r.readLine()),n=Integer.parseInt(r.readLine()),l=Integer.parseInt(r.readLine()),cnt=0;
        TreeMap<String,Integer> a=new TreeMap<>();
        int[][] arr=new int[m][n];
        for(int i=0;i<l;++i){
            String s=r.readLine();
            if(a.containsKey(s)==true)
                a.remove(s);
            else
                a.put(s,1);
        }
        Set<String> keys=a.keySet();
        ArrayList<String> v= new ArrayList<String>(keys);
        for(int i=0;i<v.size();++i){
            String[] op=v.get(i).split(" ");;
            arr=solve(arr,op[0],Integer.parseInt(op[1])-1,n,m);
        }
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                if(arr[i][j]%2==1)
                    ++cnt;
            }
        }
        System.out.println(cnt);
    }
}