import java.util.*;
import java.io.*;
class s1_2020{
    public static double max(TreeMap<Integer,Integer> h){
        Set<Integer> keys=h.keySet();
        ArrayList<Integer> time= new ArrayList<Integer>(keys);
        Collection<Integer> vals= h.values();
        ArrayList<Integer> positions=new ArrayList<>(vals);
        double max=-1000000001;
        for(int i=0;i<time.size()-1;i++){
            double dc=positions.get(i+1)-positions.get(i);
            double tc=time.get(i+1)-time.get(i);
            double speed=Math.abs(dc)/tc;
            if(speed>max)
            max=speed;
        }
        return max;
    }
    public static void main(String args[])throws Exception{
        BufferedReader r=new BufferedReader(new InputStreamReader(System.in));
        int n=Integer.parseInt(r.readLine());
        TreeMap<Integer,Integer> h=new TreeMap<>();
        for(int i=0;i<n;i++){
            String s[]=r.readLine().split(" ");
            int time= Integer.parseInt(s[0]);
            int position=Integer.parseInt(s[1]);
            h.put(time,position);
        }
        System.out.println(max(h));
    }
}