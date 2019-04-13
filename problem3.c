#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
long long int GCD(long long int a,long long int b)
{
    if (b==0) return a;
    else return GCD(b,a%b);
}
int main()
{
    unsigned long int Test;
    scanf("%ld",&Test);
    for (long int i=0;i<Test;i++)
    {
	long long int j;
	char c[26],ch='A';
        unsigned long long int N,L,crypt[1000],decrypt[1000],sort[1000];
        scanf("%lld",&N);
        scanf("%lld",&L);
        for (j=0;j<N;j++)
        {
            scanf("%lld",&crypt[j]);
        }
        for (j=0;j<N;j++)
        {
            decrypt[j+1]=GCD(crypt[j],crypt[j+1]);
            sort[j+1]=decrypt[j+1];
        }
        decrypt[0]=(crypt[0])/(decrypt[1]);
        sort[0]=decrypt[0];
        long long int a,b,t;
	    for (a=1;a<j+1;++a)
	    {
		    t=sort[a];
		    for (b=a-1;(b>=0)&&(t<sort[b]);b--)
		    {
			    sort[b+1]=sort[b];
		    }
		    sort[b+1]=t;
	    }
	    for (a=0;a<j+1;a++)
	    {
	        c[26],ch='A';
	        c[sort[a]]=ch;
	        ch++;
	        if (sort[a]=sort[a+1]) a++;
	    }
	    printf("Case #%ld: ",i+1);
	    for (a=0;a<j+1;a++)
	    {
	        printf("%c",c[decrypt[a]]);
	    }
    }
    return 0;
}
