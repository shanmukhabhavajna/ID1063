//code by bhavajna
//09-09-26
#include<stdio.h>
int main(){char str[100];char ch,chh;
	printf("enter a word:");
	scanf("%s",&str);
	printf("enter a character:");
	scanf(" %c",&ch);
	printf("enter a character:");
           scanf(" %c",&chh);
	   for(int i=0;str[i]!='\0';i++){if(str[i]==ch){str[i]=chh;}}
	   printf("%s",str);
	   return 0;}
