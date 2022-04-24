import java.util.*;
import java.io.*;
class s4_2019{
    public static int max(ArrayList<Integer> arr,int a,int b){
        int max=0;
        int lim=b;
        while(a<=lim){
            int temp=Collections.max(arr.subList(0, a))+Collections.max(arr.subList(a, arr.size()));
            if(temp>max)
                max=temp;
            ++a;
        }
        return max;
    }

    public static void main(String args[])throws Exception{
        BufferedReader r=new BufferedReader(new InputStreamReader(System.in));
        String[] p=r.readLine().split(" ");
        int p1=Integer.parseInt(p[0]);
        int p2=Integer.parseInt(p[1]);
        String[] v=r.readLine().split(" ");
        ArrayList<Integer> a=new ArrayList<>();
        for(int i=0;i<p1;i++){
            a.add(Integer.parseInt(v[i]));
        }
        if(p1==p2)
            System.out.println(Collections.max(a));
        else{
            System.out.println(max(a,p1-p2,p2));
        }
    }
}