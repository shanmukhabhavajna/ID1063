//code by Bhavajna
//09-09-26
#include<stdio.h>
int main(){char str[1000];
	printf("enter sentence: ");
	scanf("%[^\n]",&str);
	//to not to stop if spaces come in between string
	int count=1;
	for(int i=0;str[i]!=0;i++){if(str[i]==' '){count++;}}
	printf("%d",count);
	return 0;}


