import java.io.*;
import java.util.*;
class s2_2016{
    public static void main(String args[])throws Exception{
        Scanner sc=new Scanner(System.in);
        int question=sc.nextInt();
        int no=sc.nextInt();
        ArrayList<Integer> a=new ArrayList<>();
        ArrayList<Integer> b=new ArrayList<>();
        for(int i=0;i<no*2;i++){
            if(i<no)
                a.add(sc.nextInt());
            else 
                b.add(sc.nextInt());
        }
        Collections.sort(a);
        Collections.sort(b);
        int sum=0;
        if(question==1){
            for(int i=0;i<no;i++){
                sum=sum+Math.max(a.get(i),b.get(i));
            }
            System.out.println(sum);
        }
        else{
            int j=no-1;
            for(int i=0;i<no;i++){
                sum=sum+Math.max(a.get(i),b.get(j));
                --j;
            }
            System.out.println(sum);
        }
    }
}