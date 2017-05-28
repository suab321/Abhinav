#include<stdio.h>
#include<conio.h>
#include<string.h>
#define ENTER 13
#define BKSP 8
char pass[100];
char pwd[100];
int main()
{
	read:
	printf("ENTER YOUR PASSWORD");
	printf("(having uppercase,lowercase,numbers and special character):\n");
	int i=0;char ch,ch1;
	while(1)
	{
		ch=getch();
		if(ch==ENTER)
		{
		pass[i]='\0';
		break;
		}
		else if(ch==BKSP)
		{
			if(i>0)
			{
				i--;
				printf("\b \b");
			}
		}
		else
		{
			pass[i]=ch;
			i++;
			printf("*");
		}
	}
	int c1,c2,c3,c4,j=0;
	while(pass[j]!='\0')
	{
		if(pass[j]>='a'&&pass[j]<='z')
		c1++;
		else if(pass[j]>='A'&&pass[j]<='Z')
		c2++;
		else if(pass[j]>='1'&&pass[j]<='9')
		c3++;
		else
		c4++;
		j++;
	
	}
	if(c1>=1&&c2>=1&&c3>=1&&c4>=1)
	{
		read1:
		printf("\nCONFIRM YOUR PASSWORD:\n");
		i=0;
		while(1)
	{
		ch1=getch();
		if(ch1==ENTER)
		{
		pwd[i]='\0';
		break;
		}
		else if(ch1==BKSP)
		{
			if(i>0)
			{
				i--;
				printf("\b \b");
			}
		}
		else
		{
			pwd[i]=ch1;
			i++;
			printf("*");
		}
	}
	if(strcmp(pass,pwd)==0)
	printf("\nYOUR PASSWORD IS:%s\n",pass);
	else
	{
	printf("\nPASSWORD DID NOT MATCH\n");
	printf("PRESS 1 FOR RE-ENTERING THE PASSWORD:\n");
	int k;scanf("%d",&k);
	if(k==1)
	goto read1;
	else return 0;
	}
	}
	else
	{
	printf("\nWRONG PASSWORD\n");
	printf("PRESS 1 FOR RE-ENTERING THE PASSWORD:\n");
	int k;scanf("%d",&k);
	if(k==1)
	goto read;
	 else return 0;
	}
}



