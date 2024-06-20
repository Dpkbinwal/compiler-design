import java.util.*;

class reverse{
    public static void main(String []args){
        Scanner sc=new Scanner(System.in);
        String s=sc.next();
        int l=0;
        int h=s.length()-1;
       String newS= perform(l,h,s);
        System.out.println(newS);
        sc.close();
    }
    static String perform(int l,int h,String s){
        char c[]=s.toCharArray();
        while(l<h){
            char temp=c[l];
            c[l]=c[h];
            c[h]=temp;
            l++;
            h--;
        }
        return String.valueOf(c); 
    }
}