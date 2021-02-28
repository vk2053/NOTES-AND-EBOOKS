#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
	float p[100],s = 0.0;
	char msg[100];
	int n,i,v = 0,j;
	clrscr();

	printf("Enter the no of message : ");
	scanf("%d",&n);
	printf("Enter Message and corresponding Probability : ");
	for(i=0;i<n;i++){
	      scanf("%s",msg[i]);
	      s=s+p[i];
	}

	fflush(stdin);
	for(i=0;i<n;i++){
	      scanf("%f",&p[i]);
	      s=s+p[i];
	}
       printf("\nHuffman Codes Are : \n");
	for(i=0;i<n;i++){
		printf("%s ",msg[n-i-1]);
		for(j=0;j<n-v-1;j++){
			printf("0");
		}
		if(v != 0){
			printf("1");
		}
		printf("\n");
		v++;
	}

	getch();
}