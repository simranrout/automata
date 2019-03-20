
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void compute(int,int);
//FILE *fp,*fp1,*fp2;
char str[40];
int temp[30];

int Q[]={0,1,2};
int E[]={0,1};
int in_st=0;
int f[]={2};
int Rules[3][2][3]={{{0,-1,-1},{0,1,-1}},{{-1,-1,2},{-1,-1,2}},{{-1,-1,-1},{-1,-1,-1}}};
//fp1=fopen("INPUT.txt","r");
/*if(fp1==NULL)
{
printf("could not open file\n");
exit(0);
}*/
//fp2=fopen("OUTPUT1.txt","w");
main()
{
	int i=0;
	printf("Enter the string\n");
	scanf("%s",str);
	int c_st=in_st;
	for(i=0;i<strlen(str);i++)
	{
		compute(c_st,i);
	}

		
	
	
//fclose(fp1);
//fclose(fp2);
}
void compute(int c_st,int i)
{
	int j,k;
	char c=str[i];

	if(c=='\0')
	{
			for(j=0;j<1;j++)
			{
				if(f[j]==c_st)
				{
					printf("ACCEPTED\n");
				}
			}
		
	}
	else
	{
		for(k=0;k<3;k++)
		{
			if(Rules[c_st][str[i]-48][k]>=0)
			{
				compute(Rules[c_st][str[i]-48][k],i+1);
			}
			
		}

	}
	
}
