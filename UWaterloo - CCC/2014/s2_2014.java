import java.util.*;
import java.io.*;
public class s2_2014{  
    public static void main(String args[]) throws Exception{
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        int n=Integer.parseInt(r.readLine());
        ArrayList<String> a=new ArrayList<>();
        ArrayList<String> b=new ArrayList<>();
        String s=r.readLine();
        String[] ssplit=s.split(" ");
        String s1=r.readLine();
        String[] s1split=s1.split(" ");
        for(int i=0;i<n;i++){
            a.add(ssplit[i]);
            b.add(s1split[i]);
        }
        boolean check=true;
        for(int i=0;i<n;i++){
            String p1=a.get(i);
            int index=b.indexOf(a.get(i));
            String p2=b.get(index);
            if(p1.equals(p2) &&(b.get(i).equals(a.get(index))) &&(!p1.equals(b.get(i))))
                continue;
            else{
                check=false;
                break;
            }
        }
        if(check==true)
            System.out.println("good");
        else
            System.out.println("bad");
    }
}
