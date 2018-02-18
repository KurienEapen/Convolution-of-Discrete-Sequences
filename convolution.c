#include<stdio.h>
main()
{
float x[15],h[15],y[15];
int i,j,m,n;
printf("Enter the length of the first sequence, m = ");
scanf("%d",&m);
printf("Enter the length of the second sequence, n = ");
scanf("%d",&n);
printf("Enter the first sequence x[n]:");
for(i=0;i<m;i++)

scanf("%f",&x[i]);
}
printf("Enter the second sequence h[n]:");
for(i=0;i<n;i++)
{
scanf("%f",&h[i]);
}
for(i=m;i<=m+n-1;i++)
{
x[i]=0;
}
for(i=n;i<=m+n-1;i++)
{
h[i]=0;
}
for(i=0;i<=m+n-1;i++)
{
y[i]=0;
for(j=0;j<=i;j++)
{
y[i]=y[i]+(x[j]*h[i-j]);
}
}
printf("Convoluted sequence is :\n");
for(i=0;i<m+n-1;i++)
{
printf("y[%d]=%f\n",i,y[i]);
}
}