import java.util.*;
import java.lang.*;
import java.io.*;
public class Coprime
{
	public static void main (String[] args) throws java.lang.Exception
	{	BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw=new BufferedWriter(new OutputStreamWriter(System.out));
		int t=Integer.parseInt(br.readLine());
		String str[];
		while(t>0){
		    str=br.readLine().split(" ");
		    int l=Integer.parseInt(str[0]),r=Integer.parseInt(str[1]);
		    bw.write("1000003\n");
		    t--;
		}
		bw.flush();
	}
	
}
