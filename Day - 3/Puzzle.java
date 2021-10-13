import java.util.*;
import java.lang.*;
import java.io.*;
public class Puzzle
{
	public static void main (String[] args) throws java.lang.Exception
	{	BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw=new BufferedWriter(new OutputStreamWriter(System.out));
		int t=Short.parseShort(br.readLine());
		String str[];
		while(t>0&&t<=1000){
		    str=br.readLine().split(" ");
		    int n=Integer.parseInt(str[0]),m=Integer.parseInt(str[1]);
		       if((n==1||m==1)||(n==2&&m==2))
		         bw.write("YES"+"\n");
		       else
		         bw.write("NO"+"\n");
		    t--;
		}
		bw.flush();
	}
}
