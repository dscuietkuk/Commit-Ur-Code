import java.util.*;
import java.lang.*;
import java.io.*;
public class Police
{
	public static void main (String[] args) throws java.lang.Exception
	{	BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw=new BufferedWriter(new OutputStreamWriter(System.out));
		int t=Integer.parseInt(br.readLine());
		String str[];
		while(t>0){
		    str=br.readLine().split(" ");
		    int n=Integer.parseInt(str[0]),k=Integer.parseInt(str[1]);
		    String str1[]=new String[k];
		    str1=br.readLine().split(" ");
		    int arr[]=new int[k];
		    for(int i=0;i<k;i++)
		        arr[i]=Integer.parseInt(str1[i]);
		    Arrays.sort(arr);
		    int i=0,m=0,p=1,l=k-1;
		    while(i<k){
		        if(i<arr[l])
		          m++;
		        else
		          break;
		        if(l!=0&&arr[l]-arr[l-1]>=1)
		           p++; 
	           i+=p;
	           l--;
		    }
		    bw.write(m+"\n");
		    t--;
		}
		bw.flush();
	}
}
