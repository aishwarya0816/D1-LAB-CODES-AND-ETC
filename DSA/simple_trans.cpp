#include<iostream>
using namespace std;
int main()
{
	int n,m,i,j,k=0,x=0,y;
	cin>>n>>m;
	int a[n][m];
	for(i=0;i<n;i++)
	  for(j=0;j<m;j++)
		{
			cin>>a[i][j];
			if(a[i][j]!=0)
			k++;
		}
		int s[k+1][3];
		s[0][0]=n;
		s[0][1]=m;
		s[0][2]=k;
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
			{
				if(a[i][j]!=0)
				{
					s[++x][0]=i;
					s[x][1]=j;
					s[x][2]=a[i][j];
				}
			}
		x=0;
		cout<<"The sparse matrix is : \n";
		for(i=0;i<k+1;i++)
		{
			for(j=0;j<3;j++)
				cout<<s[i][j]<<"  ";
			cout<<endl;
		}
		cout<<endl;
//T R A N S P O S E	
	int tr[k+1][3];
	tr[0][0]=m;
    tr[0][1]=n;
    tr[0][2]=k;
   for(y=0;y<n;y++)
   {
   	 for(i=1;i<k+1;i++)
	 {
			if(y==s[i][1])
			{
				tr[++x][0]=y;
				tr[x][1]=s[i][0];
				tr[x][2]=s[i][2];
			}
			
	 
	  }
    }
    cout<<"The simple transpose matrix is : \n";
		for(i=0;i<k+1;i++)
		{
			for(j=0;j<3;j++)
				cout<<tr[i][j]<<"  ";
			cout<<endl;
		}    
}