import java.util.*;
import java.io.*;
class s3_2017{
    public static void main(String args[])throws Exception
    { BufferedReader r=new BufferedReader(new InputStreamReader(System.in));
        TreeMap<Integer,Integer> h=new TreeMap<>();
        int p=Integer.parseInt(r.readLine());
        String[] vals=r.readLine().split(" ");
        Set<String> a= new HashSet<String>( Arrays.asList(vals) );
        String[] b = a.toArray(new String[a.size() ]);
        int sum=0;
        for(int i=0;i<b.length-1;i++){
            for(int j=i+1;j<b.length;j++){
                sum=Integer.parseInt(b[i])+Integer.parseInt(b[j]);
                if(h.containsKey(sum)==true)
                    h.replace(sum,(h.get(sum)+1));
                else
                    h.put(sum,1);
            }
        }
        Collection<Integer> v= h.values();
        ArrayList<Integer> maxlength=new ArrayList<>(v);
        if(maxlength.size()==1){
            System.out.println((p/2)+" 1");
        }
        else{
            int max=Collections.max(maxlength);
            maxlength.removeIf(e -> (e<max));
            System.out.println(max+" "+maxlength.size());
        }
    }
}