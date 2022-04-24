import java.util.*;
import java.io.*;
class s3_2015{
    public static int lowestkey(TreeMap<Integer,Integer> a, int x){
        if(a.floorKey(x)==null)
            return -1;
        else{
            int key=a.floorKey(x);
            if(a.get(key)==1)
                return lowestkey(a,--x);
            else
                return key;
        }
    }

    public static void main(String args[])throws Exception{
        BufferedReader r=new BufferedReader(new InputStreamReader(System.in));
        int gates=Integer.parseInt(r.readLine());
        int planes=Integer.parseInt(r.readLine());
        TreeMap<Integer,Integer> h=new TreeMap<>();
        int cnt=0;
        for( int i=1;i<=gates;i++){
            h.put(i,0);
        }
        for(int i=0;i<planes;i++){
            int cp=Integer.parseInt(r.readLine());
            if(lowestkey(h,cp)==-1)
                break;
            else{
                h.replace(lowestkey(h,cp),1);
                ++cnt;
            }
        }
        System.out.println(cnt);
    }
}