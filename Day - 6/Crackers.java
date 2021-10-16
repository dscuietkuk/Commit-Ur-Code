import java.util.*;
import java.lang.*;
import java.io.*;
public class Crackers
{
	public static void main (String[] args) throws java.lang.Exception
	{	BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw=new BufferedWriter(new OutputStreamWriter(System.out));
		int t=Integer.parseInt(br.readLine());
		String str[];
		while(t>0){
		    str=br.readLine().split(" ");
		    long p=Long.parseLong(str[0]),a=Long.parseLong(str[1]),b=Long.parseLong(str[2]),c=Long.parseLong(str[3]);
		    long x=Long.parseLong(str[4]),y=Long.parseLong(str[5]);
		    long min=Math.min(a*x+b,a*y+c);
		    bw.write(p/min+"\n");
		    t--;
		}
		bw.flush();
	}
}
