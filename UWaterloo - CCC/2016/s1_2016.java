import java.util.*;
import java.io.*;
class s1_2016{
    public static TreeMap<Character,Integer> anagram(String s){
        TreeMap<Character,Integer> h= new TreeMap<>();
        for(int i=0;i<s.length();i++){
            char ch=s.charAt(i);
            if(h.containsKey(ch)==true)
                h.replace(ch,(h.get(ch)+1));
            else
                h.put(ch,1);
        }
        return h;
    }

    public static void main(String args[])throws Exception{
        BufferedReader r=new BufferedReader(new InputStreamReader(System.in));
        String a= r.readLine();
        String b=r.readLine();
        if(b.contains("*")==true){
            TreeMap<Character,Integer> atree= anagram(a);
            TreeMap<Character,Integer> btree= anagram(b);
            char ch='*';
            int stars=btree.get(ch);
            for(int i=97;i<=122;i++){
                char c=(char)i;
                if(btree.get(ch)==b.length()){
                    stars=stars-atree.get(c);
                }
                else if(atree.containsKey(c)==true && btree.containsKey(c)==true){
                    int diff=atree.get(c)-btree.get(c);
                    stars=stars-diff;
                }
            }
            if(stars==0)
                System.out.println("A");
        }

        else{
            if(anagram(a).equals(anagram(b))==true)
                System.out.println("A");
            else
                System.out.println("N");
        }
    }
}