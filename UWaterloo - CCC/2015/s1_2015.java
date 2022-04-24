import java.util.*;
import java.io.*;
class s1_2015{
  public static void main(String args[]) throws Exception{
    BufferedReader r=new BufferedReader(new InputStreamReader(System.in));
    int n=Integer.parseInt(r.readLine());
    ArrayList<Integer> a=new ArrayList<>();
    int length=-1;
    for(int i=0;i<n;i++){
        int temp=Integer.parseInt(r.readLine());
        if(temp==0){
            a.remove(length);
            --length;
        }
        else{
            a.add(temp);
            ++length;
        }
    }
    int sum=0;
    for(int i=0;i<a.size();i++){
        sum+=a.get(i);
    }
    System.out.println(sum);
}
}