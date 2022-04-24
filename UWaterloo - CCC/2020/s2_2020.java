import java.util.*;
import java.io.*;
public class s2_2020{  
    public static ArrayList<Integer> Index(int a,ArrayList<Integer>x){
        ArrayList<Integer> indexes=new ArrayList<>();
        for(int i=x.size()-1;i>=0;i--){
            if(x.get(i)==a) 
                indexes.add(i);  
        }
        return indexes;
    }

    public static void escape(ArrayList<Integer> a, ArrayList<Integer> b, int target){
        Stack<Integer> s=new Stack<>();
        int index=0;
        s.add(a.get(index));
        boolean poss=false;
        while(poss==false){
            if(s.peek()==target){
                System.out.println("yes");;
                break;
            }
            else if(b.contains(s.peek())==false && s.size()==1){
                System.out.println("no");
                break;
            }
            else if(b.contains(s.peek())==false){
                s.pop();
            }
            else{
                a.set(index,-1);
                b.set(index,-1);
                ArrayList<Integer> indexes=Index(s.peek(),b);
                s.pop();                    
                if(indexes.size()==0){
                    System.out.println("no");
                    break;
                }
                else{
                    for(int i : indexes){
                        s.add(a.get(i));
                    }
                }
            }
        }
    }

    public static void main(String args[]) throws Exception{
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        int m =Integer.parseInt(r.readLine());
        int n =Integer.parseInt(r.readLine());
        ArrayList<Integer> vals=new ArrayList<>();
        ArrayList<Integer> indexes=new ArrayList<>();
        int target=(m*n);
        for(int i=1;i<=m;i++){
            String s[]=r.readLine().split(" ");
            for(int j=0;j<n;j++){
                int c=(i*(j+1));
                vals.add(Integer.parseInt(s[j]));
                indexes.add(c);
            }
        }
        escape(vals,indexes,target);
    }
}