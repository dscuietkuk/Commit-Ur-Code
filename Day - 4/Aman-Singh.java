import java.util.*;
class StringRotation
{
    static boolean checkRotations(String str1, String str2)
    {
        return (str1.length() == str2.length()) &&((str1 + str1).contains(str2));
    }

    public static void main (String[] args)
    {
        String S1,S2;
        int T;
        Scanner sc=new Scanner(System.in);
        T=sc.nextInt();
        sc.nextLine();
        while(T-- >0){
            S1=sc.nextLine();
            S2=sc.nextLine();
            if (checkRotations(S1, S2))
                System.out.println("YES");
            else
                System.out.println("NO");
        }

    }
}