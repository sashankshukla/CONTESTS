import java.util.*;
import java.io.*;
class s3_2020{
    public static TreeMap<Character,Integer> permfind(String s){
        TreeMap<Character,Integer> h= new TreeMap<>();
        for(int i=0;i<s.length();i++){
            char ch=s.charAt(i);
            if(h.containsKey(ch)==false)
                h.put(ch,1);
            else
                h.replace(ch,(h.get(ch)+1));
        }
        return h;
    } 

    public static void main(String args[]) throws Exception{
        BufferedReader r=new BufferedReader(new InputStreamReader(System.in));
        String needle=r.readLine(),haystack=r.readLine();
        TreeMap<Character,Integer> n= permfind(needle);//needle
        int cnt=0,j=haystack.length()-needle.length(),index=needle.length();
        ArrayList<String> possibles =new ArrayList<>();
        for(int i=0;i<=j;i++,index++){
            String sub=haystack.substring(i,index);
            TreeMap<Character,Integer> sub1=permfind(sub);
            if(possibles.contains(sub)==false && permfind(sub).equals(n))
                cnt++;
            possibles.add(sub);
        }
        System.out.println(cnt);
    }

}