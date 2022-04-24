import java.util.*;
import java.io.*;
class s2_2017{
    public static void main(String args[]) throws Exception{
        BufferedReader r= new BufferedReader(new InputStreamReader(System.in));
        int n=Integer.parseInt(r.readLine());
        String arr[]=r.readLine().split(" ");
        TreeMap<Integer,Integer> h=new TreeMap<>();
        for(int i=0;i<n;i++){
            h.put((Integer.parseInt(arr[i])),0);
        }
        Set<Integer> vals= h.keySet();
        ArrayList<Integer> v=new ArrayList<>(vals); 
        int n1,n2=0;
        if(n==1)
            System.out.println(v.get(0));
        else if(n%2==0){
            n1=(int)(Math.ceil(n/2))-1;
            n2=n1+1;
            for(int i=0;i<=n;++i){
                System.out.println(v.get(n1));
                System.out.println(v.get(n2));
                --n1;
                ++n2;
            }
        }
        else{
            n1=(int)(Math.ceil(n/2));
            n2=n1+1;
            for(int i=0;i<=n1;i++){
                System.out.println(v.get(n1));
                System.out.println(v.get(n2));
            }

        }
    }
}
