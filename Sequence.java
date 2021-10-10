import java.util.*;
import java.lang.*;
import java.io.*;

class Sequence
{
	public static void main (String[] args) throws java.lang.Exception
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw=new BufferedWriter(new OutputStreamWriter(System.out));
		int t=Integer.parseInt(br.readLine());
		while(t>0){
		    int n=Integer.parseInt(br.readLine());
		    StringBuilder str=new StringBuilder(Integer.toString(n)+" ");
		    while(n!=1){
		        if(n%2==0){
		           n/=2;
		           str.append(Integer.toString(n)+" ");
		        }
		        else{
		            n=3*n+1;
		            str.append(Integer.toString(n)+" ");
		        }
		    }
		    bw.write(str.toString()+"\n");
		    t--;
		}
		bw.flush();
	}
}
