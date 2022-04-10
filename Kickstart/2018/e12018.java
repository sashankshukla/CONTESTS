import java.util.*;
public class Solution{
    public static void main(String[] args)
    { Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        for(int i=0;i<t;++i){
            int n=sc.nextInt(),k=sc.nextInt(),cnt=0;ArrayList<Integer> a=new ArrayList<>();
            for(int j=0;j<n;++j){
                a.add(sc.nextInt());
            }
            Collections.sort(a);
            while(a.size()!=0){
                int temp=k,c=0;a.removeIf(x -> (x<=0));
                for(int j=0;j<a.size();++j){
                    if(a.get(j)>0&&temp>0){
                        a.remove(j); ++cnt; --temp; --j; 
                    }                                  
                    else{
                        c=a.get(j)-1;a.set(j,c);}
                }
            }
            System.out.println("Case #" + (i+1) + ": " + cnt);
        }
    }
}

