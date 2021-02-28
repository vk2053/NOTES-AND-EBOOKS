#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int i,n,r;
float I[10],p[10],H[10],s=0,TI,TH;
clrscr();
printf("\n\n ENter number of symbols :");
scanf("%d",&n);
xx: printf("\n\n ENter the probabilities :-\n");
for(i=0;i<n;i++)
scanf("%f",&p[i]);
for(i=0;i<n;i++)
s=s + p[i];
printf("\n\n Sum of Probabilities : %f",s);
if(s==1)
{
for(i=0,TI=0;i<n;i++)
{
I[i]=log(1/p[i])/log(2);
printf("\nI[%d]=%f",i,I[i]);
TI += I[i];
}
for(i=0,TH=0;i<n;i++)
{
  H[i]=p[i]*(log(1/p[i])/log(2));
  printf("\n H[%d] = %f",i,H[i]);
  TH+=H[i];
}
printf("\n Entropy : %0.3f bits/sample", TH);
printf("\n Mutual infomation : %0.3f bits/sample",TH );
printf("\n\n Enter the rate r(samples / sec):");
scanf("%d",&r);
printf("\n\n information rate is %f bits / sec",r*TH);
}
else
{
printf("\n\n Entered properties are not correct please re-enter ");
goto xx;
}
getch();
}
