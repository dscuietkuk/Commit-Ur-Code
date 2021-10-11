import java.util.*;
import java.lang.*;
import java.io.*;
class Kangaroo
{
	public static void main (String[] args) throws java.lang.Exception
	{long start =System.nanoTime();
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw=new BufferedWriter(new OutputStreamWriter(System.out));
		int t=Integer.parseInt(br.readLine());
		while(t>0){
		    long n=Integer.parseInt(br.readLine());
		    long x=0;
		    while(Math.pow(2,x)<n)
		        x++;
		    if(n==Math.pow(2,x))
		       bw.write("YES"+"\n");
		    else
		       bw.write("NO"+"\n");
		   
		    t--;
		}
		long end=System.nanoTime();
		long time=end-start;
		 bw.write(time+"\n");
		bw.flush();
	}
}
