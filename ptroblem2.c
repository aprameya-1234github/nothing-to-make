#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
void reverse(char *string,long int high,long int low)
{
    char *ch;
    long int y=0;
    ch=(char*)malloc((high-low)*sizeof(char));
    for (long int k=low;k<=high;k++)
    {
	    ch[y++]=string[k];
    }
    puts(ch);
    free(ch);
}
int main()
{
    unsigned long int Test;
    unsigned long int str;
    long int Ecount,Scount;
    char direction[1000][1000];
    scanf("%ld",&Test);
    for (long int i=0;i<Test;i++)
    {
	getchar();
        scanf("%ld",&str);
	getchar();
	fgets(direction[i],1000,stdin);
    }
    for (long int i=0;i<Test;i++)
    {
	long int m=0,l=0;
	Ecount=0,Scount=0;
      	long int length=strlen(direction[i]);
	printf("Case #%ld ",i+1);
        	for (long int j=0;j<length;j++)
        	{
            		if (direction[i][j]=='E')
            		{
                		Ecount++;
            		}
            		if (direction[i][j]=='S')
            		{
                		Scount++;
            		}
            		if (Ecount==Scount&&Ecount!=0&&Scount!=0)
            		{
                		m=j;
                		reverse(direction[i],m,l);
                		l=m+1;
            		}
        	}
		getchar();
    }
    return 0;
}
