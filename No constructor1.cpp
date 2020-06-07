#include <stdio.h>
#include<string.h>
void substring_num(char *a ,char *b){
	int i,j,m,n;
	int flag=0,sum=0;
	m=strlen(a);
	n=strlen(b);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(a[i+j]==b[0+j])
				continue;
			flag=flag+1;}
			if(flag==n){
				sum=sum+；flag=0;}
				else flag=0;}
			
			printf("%d", sum);}
int main(int argc, char const *argv[])
{
	/* code */
	char a[100]={'\0'},b[100]={'\0'};
	scanf("%s%s",a,b);
	substring_num(a,b);
	return 0;
}