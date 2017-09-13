#include<stdio.h>

int chk(long int a[][10],int n,int m)
{
	int i,j,c=1,fg=0;
	for(i=0;i<n;i++)
		for (j=0;j<m;j++)
		   if(c++==a[i][j])
		   		fg++;
		   		
	return fg;
};
int main()
{
	int n,m,c,r,fg; 
	long int a[10][10];
	long long int sum=0;
	scanf("%d %d",&n,&m);
	for(r=0;r<n;r++)
		for(c=0;c<m;c++)
			scanf("%ld",&a[n][m]);
	fg=chk(a,n,m);
	printf("%d",fg);
	return 0;
}
