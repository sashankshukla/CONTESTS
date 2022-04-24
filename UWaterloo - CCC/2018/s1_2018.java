import java.util.*;
import java.io.*;
class s1_2018{
    public static void main(String args[]) throws Exception{
        BufferedReader r=new BufferedReader(new InputStreamReader(System.in));
        int n=Integer.parseInt(r.readLine());
        TreeMap<Integer,Integer> h= new TreeMap<>();
        for(int i=0;i<n;i++) { 
            int input=Integer.parseInt(r.readLine());
            h.put(input,input);
        }       
        Collection<Integer> b=h.values();
        ArrayList<Integer> vals=new ArrayList<>(b); 
        double min= 1000000001;
        double temp=0;
        for(int i=1;i<vals.size()-1;i++){
            double n1=Math.abs((double)vals.get(i)-(double)vals.get(i-1))/2;
            double n2=Math.abs((double)vals.get(i+1)-(double)vals.get(i))/2;
            temp=n1+n2;
            if(temp<min)
                min=temp;
        }
        System.out.println( 
        String.format("%.1f",min)); 
    }
}