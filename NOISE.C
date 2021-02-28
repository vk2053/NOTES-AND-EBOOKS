#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a,b,i,j;
float p[15][15]={0},x[15]={0},q[15][15]={0},y[15]={0};
clrscr();
printf("\n Enter number of input and output");
scanf("%d%d",&i,&j);
printf("\n Enter the elements of joint probability matrix row wise :");
for(a=0;a<i;a++)
{
for(b=0;b<j;b++)
{
printf("\n p[%d][%d] =",a,b);
scanf("\t %f",&p[a][b]);
}
}
printf("\n \n p[x,y]");
for(a=0;a<i;a++);
{
printf("\n\np[x,y]");
for(b=0;b<j;b++)
{
printf("\t%.4f",p[a][b]);
}
}
printf("\n\n The probability of inputs :");
for(a=0;a<i;a++)
{
printf("\n p(x[%d]):",a);
for(b=0;b<j;b++)
x[a]=x[a]+p[a][b];
printf("%f",x[a]);
}
printf("\n\n The probability of outputs:");
for(b=0;b<j;b++)
{
printf("\n p(y[%d]);",b);
for(a=0;a<i;a++)
y[b]=y[b] + p[a][b];
printf("%0.4f",y[b]);
}
printf("\n\n Conditional probability matrix p(y/x) :");
for(a=0;a<i;a++)
{
printf("\n");
for(b=0;b<j;b++)
{
q[a][b]=p[a][b]/x[a];
printf("\t%0.4f",q[a][b]);
}
}
getch();
}

