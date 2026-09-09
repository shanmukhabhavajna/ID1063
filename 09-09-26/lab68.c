//code by bhavajna
//09-09-26
#include<stdio.h>
int main(){char str[100];
	printf("enter a word:");
	scanf("%[^\n]", str);
	for(int i=0;str[i]!=0;i++){if(str[i]>='A'&&str[i]<='Z'){str[i]=str[i]+32;}
		else if(str[i]>='a'&&str[i]<='z'){str[i]=str[i]-32;}}
printf("%s",&str);
	return 0;}
