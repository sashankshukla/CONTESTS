import java.util.*;
import java.io.*;
class s2_2015{
    public static void main(String args[])throws Exception{
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int n=Integer.parseInt(br.readLine());
        int a=Integer.parseInt(br.readLine());
        ArrayList<String> sizes=new ArrayList<>();
        ArrayList<Integer> nos=new ArrayList<>();
        for(int i=0;i<n;i++){
            sizes.add(br.readLine());
        }
        int cnt=0;
        for(int i=0;i<a;i++){
            String[] specs=br.readLine().split(" ");
            String size=(specs[0]);
            int jersey=Integer.parseInt(specs[1]);
            if(nos.contains(jersey)==true)
                continue;
            else if(sizes.size()==0)
                break;
            else{
                if(size.equals("L")&& sizes.contains(size)){
                    ++cnt;
                    sizes.remove(size);
                    nos.add(jersey);
                }
                else if(sizes.equals("M")){
                    if(sizes.contains("M")){
                        ++cnt;
                        sizes.remove("M");
                        nos.add(jersey);
                    }
                    else if(sizes.contains("L")){
                        ++cnt;
                        sizes.remove("L");
                        nos.add(jersey);
                    }
                }
                else if(size.equals("S")){
                    if(sizes.contains("S")){
                        ++cnt;
                        sizes.remove("S");
                        nos.add(jersey);
                    }
                    else if(sizes.contains("M")){
                        ++cnt;
                        sizes.remove("M");
                        nos.add(jersey);
                    }
                    else if(sizes.contains("L")){
                        ++cnt;
                        sizes.remove("L");
                        nos.add(jersey);
                    }
                }
            }
        }
        System.out.println(cnt);
    }
}