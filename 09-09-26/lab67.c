//code by bhavajna
//09-09-26
#include<stdio.h>
#include<stdlib.h>
int main(){char *str;char ch,chh;
	int n;
	printf("enter string:");
	scanf(" %d",str);
	str=malloc((n+1)*sizeof(char));
	printf("enter a character:");
	scanf(" %c",&ch);
	printf("enter a character:");
           scanf(" %c",&chh);
	   for(int i=0;str[i]!='\0';i++){if(str[i]==ch){str[i]=chh;}}
	   printf("%s",str);
	   free(str);
	   return 0;}
