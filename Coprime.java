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
		    int i=2;
		    boolean bol=true;
		    while(i<=l){
		        int j=l;
		        bol=true;
		         while(j<=r){
		            if(gcd(i,j)!=1){
		                bol=false;
		                break;
		            }
		            j++;
		         }
		         if(bol){
		           bw.write(i+"\n");
		           break;
		         }
		         i++;
		    }
		    if(!bol){
		      i=r+1;
		      while(!bol){
		          int j=l;
		          while(j<=r){
		            if(gcd(i,j)!=1){
		                bol=true;
		                break;
		            }
		            j++;
		          }
		          if(!bol){
		            bw.write(i+"\n");
		            break;
		          }
		          bol=false;
		          i++;
		      }
		    }
		    t--;
		}
		bw.flush();
	}
	public static int gcd(int m, int n){
		        if(m==1||n==1)
		           return 1;
		        else if(m>n)
		           return (gcd(n,m));
		        else if(m==0)
		           return n;
		        else if(n==0)
		           return m;
		        else
		           return (gcd(m,n%m));
        }
}
