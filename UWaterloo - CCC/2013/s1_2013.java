import java.util.*;
import java.io.*;
public class s1_2013{
    public static boolean distinctyear(String s){
        boolean b=true;
        TreeMap<Character,Integer> h=new TreeMap<>();
        for(int i=0;i<s.length();i++){
            char ch=s.charAt(i);
            if(h.containsKey(ch)==true){
                b=false;
                break;
            }
            else
                h.put(ch,0);
        }
        return  b;
    }
    public static void main(String args[])throws Exception{
        BufferedReader r=new BufferedReader(new InputStreamReader(System.in));
        int year=Integer.parseInt(r.readLine())+1;
        int i=0;
        while(i==0){
            if(distinctyear(String.valueOf(year))==true){
                System.out.println(year);
                i=1;
            }
            else
                ++year;
        }
    }
}