import java.util.*;
import java.lang.*;
import java.io.*;
public class Rotate
{
	public static void main (String[] args) throws java.lang.Exception
	{	BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw=new BufferedWriter(new OutputStreamWriter(System.out));
		int t=Integer.parseInt(br.readLine());
		while(t>0){
		    String s1=br.readLine();
		    String s2=br.readLine();
		    String s3="";
		    s3=s1+s1;
		    if(s1.length()==s2.length()&&(s3.contains(s2)==true))
		        bw.write("YES"+"\n");
		    else
		        bw.write("NO"+"\n");
		    t--;
		}
		bw.flush();
	}
}
