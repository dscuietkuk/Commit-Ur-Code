import java.util.*;
import java.lang.*;
import java.io.*;
public class Game
{
	public static void main (String[] args) throws java.lang.Exception
	{	BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw=new BufferedWriter(new OutputStreamWriter(System.out));
		int t=Byte.parseByte(br.readLine());
		while(t>0&&t<=100){
		    short n=Short.parseShort(br.readLine());
		    char mat[][]=new char[3][n+1];
		    int k=0;
		    for(int i=0;i<2;i++){
		        String line=br.readLine();
		        for(int j=0;j<n;j++){
		            if(line.charAt(j)=='1')
		               k++;
		            mat[i+1][j+1]=line.charAt(j);
		        }     
		    }
		    if(k>=1){
		    boolean bol=true;
		    for(int j=1;j<n;j++){
		        int count=0;
		        for(int i=1;i<=2;i++){
		            if(mat[i][j+1]=='1')
		               count++;
		        }
		        if(count==2){
		          bol=false;
		          break;
		        }
		    }
		    if(bol)
		      bw.write("YES"+"\n");
		    else
		      bw.write("NO"+"\n");
		    }
		    else
		      bw.write("YES"+"\n");
		    t--;
		}
		bw.flush();
	}
}
