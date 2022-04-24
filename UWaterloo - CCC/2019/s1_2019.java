import java.util.*;
class s1_2019{
    public static void main(String args[]){
        int one=1;
        int two=2;
        int three=3;
        int four=4;
        int temp=0;
        Scanner sc=new Scanner(System.in);
        String s=sc.nextLine();
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='H'){
                temp=one;
                one=three;
                three=temp;
                temp=two;
                two=four;
                four=temp;
            }
            else{
             temp=one;
             one=two;
             two=temp;
             temp=three;
             three=four;
             four=temp;
            }
        }
        System.out.print(one);
        System.out.println(two);
        System.out.print(three);
        System.out.println(four);
    }
}